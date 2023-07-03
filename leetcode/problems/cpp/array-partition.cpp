// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size(), sum = 0;
        for (int i = 0; i < len; i += 2) sum += nums[i];
        return sum;
    }
};