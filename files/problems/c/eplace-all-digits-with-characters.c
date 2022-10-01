// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

char* replaceDigits(char* s) {
    int index = 0;
    while (s[index]) {
        if (index % 2 != 0) s[index] = s[index - 1] + (s[index] - '0');
        index++;
    }
    return s;
}