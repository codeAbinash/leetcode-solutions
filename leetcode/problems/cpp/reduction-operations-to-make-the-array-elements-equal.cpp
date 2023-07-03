// by @codeAbinash

class Solution {
   public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0, c = 0, len = nums.size();
        for (int i = 1; i < len; i++) {
            if (nums[i] != nums[i - 1]) c++;
            count += c;
        }
        return count;
    }
};