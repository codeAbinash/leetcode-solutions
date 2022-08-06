int firstUniqChar(char* s) {
    int chars[26] = {0};
    int i = 0;

    while (s[i]) {
        chars[s[i] - 'a']++;
        i++;
    }
    i = 0;

    while (s[i]) {
        if (chars[s[i] - 'a'] == 1)
            return i;
        i++;
    }
    return -1;
}