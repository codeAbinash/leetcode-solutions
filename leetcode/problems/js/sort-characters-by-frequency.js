// by @codeAbinash

const frequencySort = s => {
    let map = new Map()
    for (ch of s)
        map.get(ch) === undefined ? map.set(ch, 1) : map.set(ch, map.get(ch) + 1)
    map = [...map.entries()].sort((a, b) => b[1] - a[1])

    let result = ''
    map.forEach(elem => {
        result += elem[0].repeat(elem[1])
    })
    return result;
};
