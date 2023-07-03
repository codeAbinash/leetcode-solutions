// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int thirdMax(vector<int>& nums) {
        int len = nums.size();
        int min = nums[0];
        int max = nums[0];

        for (int i = 0; i < len; i++) {
            if (nums[i] < min)
                min = nums[i];
            else if (nums[i] > max)
                max = nums[i];
        }

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
};