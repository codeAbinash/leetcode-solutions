// by @codeAbinash

// Time Complexity O(n)
// Space Complexity O(n)

var wordPattern = function (pattern, str) {
    let wordHash = {}, patternMap = {}, words = str.split(" ");
    if (words.length !== pattern.length)
        return false;

    for (let i = 0; i < words.length; i++) {
        let w = wordHash[words[i]];

        if (!w)
            wordHash[words[i]] = pattern[i];
        else if (w !== pattern[i])
            return false;

        let p = patternMap[pattern[i]]
        if (!p)
            patternMap[pattern[i]] = words[i]
        else if (p !== words[i])
            return false;
    }
    return true;
};