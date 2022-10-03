// by @codeAbinash

static bool compareFunc(pair<char, int> &a, pair<char, int> &b) {
    return a.second > b.second;
}

class Solution {
   public:
    static string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (auto ch : s) mp[ch]++;
        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), compareFunc);
        string result;
        for (auto &elem : v)
            for (int count = 0; count < elem.second; count++)
                result.push_back(elem.first);
        return result;
    }
};