// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    bool checkRecord(string s) {
        int absent = 0;
        int late = 0;
        for (auto ch : s) {
            if (late >= 3) return 0;
            if (ch == 'A') {
                absent++;
                late = 0;
            } else if (ch == 'L')
                late++;
            else
                late = 0;
        }
        return absent < 2 && late < 3;
    }
};