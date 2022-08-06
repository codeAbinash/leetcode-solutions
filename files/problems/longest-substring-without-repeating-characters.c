int lengthOfLongestSubstring(char *s) {
    int hsah[128], i , start = - 1, maxLen = 0;

    for (i = 0; i < 128; i++) hsah[i] = -1;
    i = 0;
    while(s[i]){
        if (hsah[s[i]] > start)
            start = hsah[s[i]];

        if(i - start > maxLen)
            maxLen = i - start;

        hsah[s[i]] = i;
        i++;
    }
    return maxLen;
}