bool matchHash(int* x, int* y) {
    for (int i = 0; i < 26; i++)
        if (x[i] != y[i]) return false;
    return true;
}
int* findAnagrams(char* s, char* p, int* returnSize) {
    int sLen = strlen(s), pLen = strlen(p);
    int* result = (int*)malloc(sLen * sizeof(int));
    int pHash[26] = {0}, sHash[26] = {0};

    *returnSize = 0;

    for (int i = 0; i < pLen; i++) pHash[p[i] - 'a']++;

    for (int i = 0; i < sLen; i++) {
        if (i >= pLen) sHash[s[i - pLen] - 'a']--;
        sHash[s[i] - 'a']++;
        if (matchHash(sHash, pHash)) 
            result[(*returnSize)++] = i + 1 - pLen;
    }
    
    return result;
}