// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int thirdMax(vector<int>& nums) {
        int len = nums.size();
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        int num = max;
        int found = 0;

        for (int j = 0; j < 2; j++) {
            int max = min;
            for (int i = 0; i < len; i++)
                if (max < nums[i] && nums[i] < num) {
                    max = nums[i];
                    found++;
                }
            num = max;
        }
        if (found < 1) return max;
        return num;
    }
};W