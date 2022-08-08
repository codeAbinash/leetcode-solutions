import highligh from './prism.js'
import debounce from './debounce.js'
import data from './data.js'


export default function loadCodes(){

    let searchBar = document.getElementById('searchInput')
    let main = document.getElementById('allCodes')
    const fileExtensions = data.fileExtensions
    const codeDOM = {}
    
    
    fileExtensions.forEach(fileExtension => {
        const elem = document.createElement('div')
        const codeType = fileExtension.substring(1)
        elem.id = codeType
        codeDOM[codeType] = elem
        main.appendChild(elem)
    })
    
    
    searchBar.addEventListener("input", debounce(() => { searchFile() }, 500, false))
    function searchFile() {
        // perse data and detect the file name
        let searchStr = searchBar.value.trim().toLowerCase()
        if(searchStr.includes('leetcode.com')){
            searchStr = searchStr.replace('https://leetcode.com/problems/','')
            if(searchStr.includes('/'))
                searchStr = searchStr.substring(0,searchStr.indexOf('/'))
        }
        searchStr = searchStr.split(' ').join('-')
    
        if (!searchStr) {
            main.style.display = 'none'
            return
        }
    
        main.style.display = 'block'
        loadCodes(searchStr)
    }
    
    
    function loadCodes(fetchLink) {
        let loadPromises = []
        let found = false
    
        fileExtensions.forEach((fileExtension) => {
            const codeType = fileExtension.substring(1)
            let fileLink = `./files/problems/${fileExtension.replace('.','')}/${fetchLink}${fileExtension}`
            
            fetchData(fileLink)
            

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
                            codeDOM[codeType].innerHTML = `<p class='err'>${data.getLangName(codeType)} solution not available</p>`
                            return
                        }
                        text.then((txt) => {
                            codeDOM[codeType].innerHTML = ''
                            codeDOM[codeType].appendChild(getDomElem(txt, codeType))
                            found = true
                        })
                    })
                loadPromises.push(promise)
            }
        })
    
        Promise.allSettled(loadPromises).then(() => {
            setTimeout(() => { highligh() }, 50);
            if(found)
                searchBar.blur()
        })
    }



    function getDomElem(text, codeType) {
        // let text = ``
        let elem = document.createElement('div')
        elem.classList.add('language-container')
    
        // Create heading 
        let heading = document.createElement('p')
        heading.classList.add('codeType')
        heading.innerText = `${data.getLangName(codeType)} Solution`
    
        // Code container
        let codeContainer = document.createElement('div')
        codeContainer.classList.add('code-txt')
    
        // Pre -> code
        let pre = document.createElement('pre')
        pre.classList.add(`language-${data.getClassName(codeType)}`)
    
        let code = document.createElement('code')
        code.textContent = text;
        
        pre.appendChild(code)
        codeContainer.appendChild(pre)
        
        elem.appendChild(heading)
        elem.appendChild(codeContainer)
        
        return elem
    }   
}