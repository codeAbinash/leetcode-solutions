// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int smallestEqual(vector<int>& nums) {
        int i, len = nums.size();
        for (i = 0; i < len; i++)
            if (i % 10 == nums[i]) return i;
        return -1;
    }
};