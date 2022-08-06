void reverseString(char* s, int sSize){
    int start = 0;
    char tmp;
    sSize--;
    while (start < sSize) {
        tmp = s[start];
        s[start] = s[sSize];
        s[sSize] = tmp;
        start++;sSize--;
    }
}