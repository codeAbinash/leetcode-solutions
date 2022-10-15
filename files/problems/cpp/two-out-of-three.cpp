// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
   public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        unordered_set<int> a, b, c;
        for (auto elem : nums1) a.insert(elem);
        for (auto elem : nums2) b.insert(elem);
        for (auto elem : nums3) c.insert(elem);

        unordered_map<int, int> mp;
        for (auto elem : a) mp[elem]++;
        for (auto elem : b) mp[elem]++;
        for (auto elem : c) mp[elem]++;

        vector<int> result;
        for (auto elem : mp)
            if (elem.second > 1) result.push_back(elem.first);
        return result;
    }
};