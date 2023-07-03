// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    string truncateSentence(string s, int k) {
        int count = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') count++;
            if (count == k) {
                s.erase(s.begin() + i, s.end());
                return s;
            }
        }
        return s;
    }
};