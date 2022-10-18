// by @codeAbinash

bool matchMap(bool *mp1, bool *mp2) {
    for (int i = 0; i < 26; i++)
        if (mp2[i] && !mp1[i]) return false;
    return true;
}

class Solution {
   public:
    int countConsistentStrings(string allowed, vector<string> &words) {
        bool mp[26] = {0};
        for (int i = 0; i < allowed.length(); i++) mp[allowed[i] - 'a'] = true;
        int count = 0, size = words.size();
        for (int i = 0; i < size; i++) {
            bool mpWord[26] = {0};
            int len = words[i].length();
            for (int j = 0; j < len; j++) mpWord[words[i][j] - 'a'] = true;
            if (matchMap(mp, mpWord)) count++;
        }
        return count;
    }
};