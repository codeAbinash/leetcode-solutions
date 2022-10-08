// by @codeAbinash

class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len = nums.size();
        unordered_set<int> set;
        for (int i = 0; i < len; i++) {
            if (set.count(nums[i])) return true;
            set.insert(nums[i]);
            if (set.size() > k) set.erase(nums[i - k]);
        }
        return false;
    }
};