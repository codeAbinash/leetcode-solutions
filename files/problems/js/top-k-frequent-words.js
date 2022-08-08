var topKFrequent = function (words, k) {
    let map = new Map();

    for (let i = 0; i < words.length; i++)
        map.set(words[i], (map.get(words[i]) || 0) + 1);

    let ext = [...new Map(map)];

    ext.sort((map, ext) => {
        if (map[1] === ext[1])
            return map[0] > ext[0] ? 1 : -1;
        return map[1] < ext[1] ? 1 : -1;
    });

    return ext.slice(0, k).map((x) => x[0]);
};