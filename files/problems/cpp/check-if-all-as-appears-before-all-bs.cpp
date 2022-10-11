// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    bool checkString(string s) {
        int len = s.length(), i;
        for (i = 0; i < len; i++)
            if (s[i] == 'b') break;

        while (i < len) {
            if (s[i] == 'a') return false;
            i++;
        }
        return true;
    }
};