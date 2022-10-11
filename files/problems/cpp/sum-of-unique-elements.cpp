// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int sumOfUnique(vector<int>& nums) {
        int hash[101] = {0}, len = nums.size();
        for (int i = 0; i < len; i++) hash[nums[i]]++;

        int sum = 0;
        for (int i = 0; i < len; i++)
            if (hash[nums[i]] == 1) sum += nums[i];
        return sum;
    }
};