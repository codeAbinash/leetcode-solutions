export default function domEvents() {
    let searchBar = document.getElementById('searchInput')

    // Shift + F
    let keys = {}
    function keyPress(e) {
        let { key, type } = e
        let isKeyDown = (type == 'keydown')
        keys[key] = isKeyDown;
        if (isKeyDown && keys.Shift && (keys.f || keys.F)) {
            let tagNameFocusedElem = document.activeElement.tagName
            if (tagNameFocusedElem != 'INPUT') {
                e.preventDefault()
                searchBar.focus();
            }
        }
        if (isKeyDown == false)
            keys = {}
    }
    document.onkeyup = (e) => { keyPress(e) }
    document.onkeydown = (e) => { keyPress(e) }
    
    
    searchBar.addEventListener('search', ()=>{
        searchBar.blur()
    })
    
    searchBar.onkeydown = (e) => {
        if (e.key === 'Escape') {
            e.preventDefault();
            searchBar.value = ''
        }
    }

    // Change Placeholder in large screens
    let windowWidth = window.innerWidth;
    if (windowWidth >= 900){
        searchBar.placeholder += " ( Shift + F )"
    }
    
}
