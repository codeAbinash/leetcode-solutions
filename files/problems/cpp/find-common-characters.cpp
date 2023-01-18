// by @codeAbinash

class Solution {
   public:
    vector<string> commonChars(vector<string> &words) {
        int hash1[26] = {0}, hash2[26] = {0};
        int wordLen = words.size();
        vector<string> ans;

        for (auto &ch : words[0]) hash1[ch - 'a']++;

        for (int i = 1; i < wordLen; i++) {
            for (char &ch : words[i]) hash2[ch - 'a']++;

            // Intersectionn of hashmap
            for (int j = 0; j < 26; j++) {
                int c1 = hash1[j], c2 = hash2[j];
                hash1[j] = c1 > c2 ? c2 : c1;
                hash2[j] = 0;
            }
        }
        for (int j = 0; j < 26; j++) {
            int count = hash1[j];
            while (count--) {
                string s;
                s = j + 'a';
                ans.push_back(s);
            }
        }
        return ans;
    }
};