int lengthOfLastWord(char* s) {
    int len = 1, i = 1;

    if(s[0] == ' ') len = 0;

    while (s[i]) {
        if(s[i] != ' ' && s[i - 1] == ' ')
                len = 1;
        else if(s[i] != ' ')
            len++;
        i++;
    }
    return len;
}