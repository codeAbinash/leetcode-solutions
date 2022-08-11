// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char* reverseOnlyLetters(char* s) {
        int start = 0, end = strlen(s) - 1;
    char tmp;

    while (start < end && (s[start] || s[end])) {
        if (!isLetter(s[start])) start++;
        if (!isLetter(s[end])) end--;

        if (isLetter(s[start]) && isLetter(s[end])) {
            tmp = s[start];
            s[start++] = s[end];
            s[end--] = tmp;
        }
    }
    return s;
}