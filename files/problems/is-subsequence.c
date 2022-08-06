int isSubsequence(char* s, char* t) {
    while(*s && *t) {
        if (*s == *t)
            s++;
        t++;
    }
    return !(*s);
}