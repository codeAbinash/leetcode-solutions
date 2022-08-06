import highligh from './prism.js'
import debounce from './debounce.js'

highligh()

let searchBox = document.getElementById('searchInput')
let main = document.getElementById('allCodes')


const fileExtensions = ['.c', '.cpp', '.js', '.py', '.java', '.txt']
const classNames = {
    'c': 'clike',
    'cpp': 'clike',
    'java': 'java',
    'js': 'js',
    'py': 'py',
    'txt': 'txt'
}
const langNames = {
    'c': 'C',
    'cpp': 'C++',
    'java': 'Java',
    'js': 'JavaScript',
    'py': 'Python',
    'txt': 'Description of'
}
const codeDOM = {}



fileExtensions.forEach(fileExtension => {
    const elem = document.createElement('div')
    const codeType = fileExtension.substring(1)
    elem.id = codeType
    codeDOM[codeType] = elem
    main.appendChild(elem)
})


searchBox.addEventListener("input", debounce(() => { searchFile() }, 500, false))
function searchFile() {
    let searchStr = searchBox.value.trim().toLowerCase()
    if(searchStr.includes('leetcode.com')){
        searchStr = searchStr.replace('https://leetcode.com/problems/','')
        if(searchStr.includes('/'))
            searchStr = searchStr.substring(0,searchStr.indexOf('/'))
    }

    if (!searchStr) {
        main.style.display = 'none'
        return
    }

    main.style.display = 'block'
    const fetchLink = './files/problems/' + searchStr
    loadCodes(fetchLink)
}

searchBox.addEventListener('search', ()=>{
    searchBox.blur()
})
searchBox.onkeydown = (e) => {
    if (e.key === 'Escape') {
        e.preventDefault();
        searchBox.blur()
    }
}

function getClassName(fileExt) { return classNames[fileExt] }

function getLangName(fileExt) { return langNames[fileExt] }


function getDomText(text, codeType) {
    // let text = ``
    let txt = `
    <p class="codeType">${getLangName(codeType)} Solution</p>
    <div class="code-txt">
        <pre class="language-${getClassName(codeType)}"><code>${text}</code></pre>
    </div>`

    return txt
}


function loadCodes(fetchLink,) {
    let loadPromises = []
    fileExtensions.forEach((fileExtension) => {
        const codeType = fileExtension.substring(1)
        fetchData(fetchLink + fileExtension)
        function fetchData(src) {
            let promise = fetch(src)
                .then((text) => {
                    let err = false
                    if (!text.ok)
                        err = true
                    return [text.text(), err]
                })
                .then(([text, err]) => {
                    if (err) {
                        codeDOM[codeType].innerHTML = `<p class='err'>${getLangName(codeType)} code not available</p>`
                        return
                    }
                    text.then((txt) => {
                        codeDOM[codeType].innerHTML = getDomText(txt, codeType)
                    })
                })
            loadPromises.push(promise)
        }
    })

    Promise.allSettled(loadPromises).then(() => {
        setTimeout(() => { highligh() }, 50);
    })
}



// searchBar.addEventListener("input", debounce(() => { filterSearch(searchBar.value) }, 300, false))