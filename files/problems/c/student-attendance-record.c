// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

bool checkRecord(char *s) {
    int absent = 0;
    int late = 0;
    char *p = s;
    while (*p) {
        char ch = *p;
        if (late >= 3) return 0;
        if (ch == 'A') {
            absent++;
            late = 0;
        } else if (ch == 'L')
            late++;
        else
            late = 0;
        p++;
    }
    return absent < 2 && late < 3;
}