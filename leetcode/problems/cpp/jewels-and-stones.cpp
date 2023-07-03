// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int numJewelsInStones(string jewels, string stones) {
        bool j[128] = {0};
        for (auto &c : jewels) j[c] = true;
        int count = 0;
        for (auto &c : stones)
            if (j[c]) count++;
        return count;
    }
};