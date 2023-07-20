// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

bool checkRecord(char* s) {
    int absentCount = 0;
    int lateCount = 0;
    for (int i = 0; s[i] != '\0';i++) {
        if (lateCount >= 3) return 0;
        if (s[i] == 'A') {
            absentCount++;
            lateCount = 0;
        } else if (s[i] == 'L')
            lateCount++;
        else
            lateCount = 0;
    }
    return absentCount < 2 && lateCount < 3;
}