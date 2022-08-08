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

function getClassName(fileExt) { return classNames[fileExt] }
    
function getLangName(fileExt) { return langNames[fileExt] }


let data = {
    fileExtensions,
    classNames,
    langNames,
    getClassName,
    getLangName
}

export default data