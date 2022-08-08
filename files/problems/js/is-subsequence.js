var isSubsequence = function (s, t) {
    s = s.split("")
    let j = 0

    for (let i = 0; i < t.length; i++) {
        if (s[j] === t[i]) {
            j++;
        }
    }
    return j === s.length
}