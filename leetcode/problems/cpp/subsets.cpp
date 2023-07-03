// by @codeAbinash

class Solution {
   public:
    vector<vector<int>> allSubsets;
    void generate(vector<int>& subset, int i, vector<int>& nums) {
        if (i == nums.size()) {
            allSubsets.push_back(subset);
            return;
        }
        generate(subset, i + 1, nums);

        subset.push_back(nums[i]);
        generate(subset, i + 1, nums);
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        generate(subset, 0, nums);
        return allSubsets;
    }
};

// by @codeAbinash
// Using bit masking

class Solution {
   public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsetCount = 1 << n;
        vector<vector<int>> allSubsets;
        for (int mask = 0; mask < subsetCount; mask++) {
            vector<int> subset;
            for (int i = 0; i < n; i++)
                if ((mask & (1 << i)) != 0) subset.push_back(nums[i]);
            allSubsets.push_back(subset);
        }
        return allSubsets;
    }
};