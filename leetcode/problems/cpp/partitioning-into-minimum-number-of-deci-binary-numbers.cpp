// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int minPartitions(string n) {
        char m = '0';
        for (auto &i : n) m = max(m, i);
        return m - '0';
    }
};