// by @codeAbinash

class Solution {
   public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> v = nums;
        sort(v.begin(), v.end());
        int n = nums.size(), i;
        for (i = n - 1; i >= 0; i--) mp[v[i]] = i;
        for (i = 0; i < n; i++) nums[i] = mp[nums[i]];
        return nums;
    }
};