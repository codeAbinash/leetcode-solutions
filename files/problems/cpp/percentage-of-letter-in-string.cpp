// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int percentageLetter(string s, char letter) {
        int len = s.length();
        float count = 0;
        for (int i = 0; i < len; i++)
            if (s[i] == letter) count++;
        return (double(count) / len ) * 100;
    }
};