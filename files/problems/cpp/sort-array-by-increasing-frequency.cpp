// by @codeAbinash

bool comparePair(pair<int, int> &a, pair<int, int> &b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second < b.second;
}

class Solution {
   public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        int size = nums.size();
        for (int i = 0; i < size; i++) mp[nums[i]]++;

        vector<pair<int, int>> freq;
        for (auto& elem : mp) freq.push_back(elem);

        sort(freq.begin(), freq.end(), comparePair);

        vector<int> result;
        
        for (auto& elem : freq)
            for (int i = 0; i < elem.second; i++) result.push_back(elem.first);
        return result;
    }
};