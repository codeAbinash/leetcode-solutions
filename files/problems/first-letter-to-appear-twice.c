char repeatedCharacter(char* s) {
    int chars[26] = {0};
    int i = 0;

    while (s[i]) {
        chars[s[i] - 'a']++;
        if(chars[s[i] - 'a'] == 2)
            return s[i];
        i++;
    }
    return NULL;
}