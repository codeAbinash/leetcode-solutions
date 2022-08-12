// @codeAbinash
// Time Complexity O(n)
// Space Complexity O(1)

char *greatestLetter(char *s) {
    int i = 0;
    int lower[26] = {0}, upper[26] = {0};
    char *ans = (char *)malloc(sizeof(char) * 2);
    ans[1] = '\0';

    while (s[i]) {
        if (s[i] >= 'a' && s[i] <= 'z') lower[s[i] - 'a']++;
        if (s[i] >= 'A' && s[i] <= 'Z') upper[s[i] - 'A']++;
        i++;
    }

    for (i = 25; i >= 0; i--) {
        if (lower[i] != 0 && upper[i] != 0) {
            ans[0] = i + 'A';
            return ans;
        }
    }
    
    ans[0] = '\0';
    return ans;
}