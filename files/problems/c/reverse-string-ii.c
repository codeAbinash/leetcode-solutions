void reverse(char *s, int start, int end) { 
    char tmp;
    while (start < end) {
        tmp = s[start];
        s[start++] = s[end];
        s[end--] = tmp;
    }
}

char * reverseStr(char * s, int k){
    int i = 0;

    while (s[i] != '\0') {
        printf("%c",s[i]);
        i++;
    }

    return s;
}