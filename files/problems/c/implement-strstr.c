int match(char *haystack, char *needle, int a, int n) {
    for (int i = 0; i < n; i++) {
        if (haystack[a] != needle[i])
            return 0;
        a++;
    }
    return 1;
}

int strStr(char *haystack, char *needle) {
    int n = strlen(haystack), m = strlen(needle);
    for (int i = 0; i < n; i++)
        if (haystack[i] == needle[0])
            if (match(haystack, needle, i, m))
                return i;
    return -1;
}