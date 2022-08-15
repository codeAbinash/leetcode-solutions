// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

inline bool isPalindrome(char *s) {
    int start = 0, end = strlen(s) - 1;
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}
char *firstPalindrome(char **words, int wordsSize) {
    int wordLen = 0;
    char *arr = (char *)malloc(sizeof(char) * 100);
    for (int i = 0; i < wordsSize; i++)
        if (isPalindrome(words[i])) return words[i];
    return "\0";
}