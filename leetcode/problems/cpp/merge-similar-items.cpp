// by @codeAbinash

class Solution {
   public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> mp;
        for (int i = 0; i < items1.size(); i++)
            mp.insert({items1[i][0], items1[i][1]});
        for (int i = 0; i < items2.size(); i++)
            mp[items2[i][0]] = mp[items2[i][0]] + items2[i][1];

        vector<vector<int>> result;
        for (auto& val : mp) result.push_back({val.first, val.second});
        return result;
    }
};