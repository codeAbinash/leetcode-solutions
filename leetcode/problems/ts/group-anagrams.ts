function groupAnagrams(strs: string[]): string[][] {
    let map = new Map<string, string[]>();
    for (let str of strs) {
        let sortedStr = str.split('').sort().join('');
        if (!map.has(sortedStr)) {
            map.set(sortedStr, []);
        }
        map.get(sortedStr)?.push(str);
    }
    return Array.from(map.values());
};