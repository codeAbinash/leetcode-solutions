// by @codeAbinash
// Time Complexity : O(1)
// Space Complexity : O(1)

class Solution {
   public:
    int hammingDistance(int x, int y) {
        bitset<32> xbit(x), ybit(y);
        int result = 0;
        for (int i = 0; i < 32; i++) 
            result += xbit[i] != ybit[i];
        return result;
    }
};