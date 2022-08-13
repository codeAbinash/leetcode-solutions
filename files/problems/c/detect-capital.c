// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

bool isUpperCase(char c) { return c >= 'A' && c <= 'Z'; }
bool isAllUppercase(char* word) {
    int i = 1;
    while (word[i]) {
        if (!isUpperCase(word[i])) return false;
        i++;
    }
    return true;
}
bool isAllLowercase(char* word) {
    int i = 1;
    while (word[i]) {
        if (isUpperCase(word[i])) return false;
        i++;
    }
    return true;
}
bool detectCapitalUse(char* word) {
    if (isUpperCase(word[0]))
        return isAllLowercase(word) || isAllUppercase(word);
    return isAllLowercase(word);
}