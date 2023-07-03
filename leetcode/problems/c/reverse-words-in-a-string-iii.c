void reverse(char *s, int start, int end) {
    while(start < end) {
        int temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
    }
}

char * reverseWords(char * s){    
    int wordStart = 0;
    int i;
    while (s[i] != '\0'){
        if (s[i] == ' ') {
            reverse(s, wordStart, i - 1);
            printf("Space : %d, %d\n", wordStart, i);
            i++;
            wordStart = i;
        }
        i++;
    }
    reverse(s, wordStart, i - 1);
    return s;
}