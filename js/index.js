import highligh from './prism.js'


highligh()

let searchBox = document.getElementById('searchInput')
let main = document.getElementById('allCodes')


const fileExtensions = ['.c', '.js', '.cpp', '.py', '.java']
const codeDOM = {}



fileExtensions.forEach(fileExtension => {
    const elem = document.createElement('div')
    const codeType = fileExtension.substring(1)
    elem.id = codeType
    codeDOM[codeType] = elem
    main.appendChild(elem)
})
searchBox.onkeyup = () => {
    let searchStr = searchBox.value.trim().toLowerCase()
    searchFile(searchStr)
}

function getClassName(fileExt) {
    const classNames = {
        'c': 'clike',
        'cpp': 'clike',
        'java': 'java',
        'js': 'js',
        'py': 'py',
    }
    return classNames[fileExt]
}

function getLangName(fileExt) {
    const langNames = {
        'c': 'C',
        'cpp': 'C++',
        'java': 'Java',
        'js': 'JavaScript',
        'py': 'Python'
    }
    return langNames[fileExt]
}



function getDomText(text, codeType) {
    // let text = ``
    let txt = `
    <p>${getLangName(codeType)} Code</p>
    <div class="code-txt">
        <pre class="language-${getClassName(codeType)}"><code>${text}</code></pre>
    </div>`

    return txt
}



function searchFile(filename = '') {
    const fetchLink = './files/problems/' + filename
    loadCodes(fetchLink)
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
                        codeDOM[codeType].innerHTML = `<p class='err'>${codeType} code not found</p>`
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
        highligh()
    })
}



// searchBar.addEventListener("input", debounce(() => { filterSearch(searchBar.value) }, 300, false))