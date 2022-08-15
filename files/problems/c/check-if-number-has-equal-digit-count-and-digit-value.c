// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

bool digitCount(char* num) {
    int i = 0, hash[10] = {0};
    while (num[i]) hash[num[i++] - '0']++;

    i = 0;
    while (num[i])
        if (num[i] - '0' != hash[i++])
            return false;
    return true;
}