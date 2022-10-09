// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int minTimeToType(string word) {
        char currWord = 'a';
        int diff = 0, time = 0;
        for (auto &ch : word) {
            diff = abs(currWord - ch);
            time += min(diff, 26 - diff) + 1; // +1 for writing
            currWord = ch;
        }
        return time;
    }
};