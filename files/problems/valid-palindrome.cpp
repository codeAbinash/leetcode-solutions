inline int isAlpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

inline char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int isPalindrome(char* s) {
    int i = 0, j = strlen(s);
    while (i <= j) {
        if (!isAlpha(s[i])) {
            i++;
            continue;
        }
        if (!isAlpha(s[j])) {
            j--;
            continue;
        }

        if (toLowerCase(s[i]) != toLowerCase(s[j])) 
            return false;
        
        i++;j--;
    }
    return true;
}