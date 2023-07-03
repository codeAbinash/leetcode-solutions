// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for(int i = 0; i < n ; i ++)      {
            result.push_back(nums[i]);
            result.push_back(nums[n + i]);

        }
        return result;
    }
};