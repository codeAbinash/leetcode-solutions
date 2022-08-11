// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

char* reverseVowels(char* s) {
    int start = 0, end = strlen(s) - 1;
    char tmp;

    while (start < end && (s[start] || s[end])) {
        if (!isVowel(s[start])) start++;
        if (!isVowel(s[end])) end--;

        if (isVowel(s[start]) && isVowel(s[end])) {
            tmp = s[start];
            s[start++] = s[end];
            s[end--] = tmp;
        }
    }
    return s;
}