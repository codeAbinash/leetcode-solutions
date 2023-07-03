int characterReplacement(char *s, int k) {
    int max = 0, i, diff = 0, l = 0;
    int hash[26] = {0};
    // int *hash = calloc(26, 4);
    if (s[0] == 0) return 0;

    while(s[i]){
        if (++hash[s[i] - 'A'] <= max) {
            if (diff == k)
                hash[s[l++] - 'A']--;
            else
                diff++;
        }
        else
            max++;
        i++;
    }
    return max + diff;
}