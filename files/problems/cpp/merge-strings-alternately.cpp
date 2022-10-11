// by @codeAbinash
// Time Complexity : O(n)

class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.length(), l2 = word2.length();
        int maxLen = max(l1, l2);
        string result = "";
        for (int i = 0; i < maxLen; i++) {
            if (l1 > i) result.push_back(word1[i]);
            if (l2 > i) result.push_back(word2[i]);
        }
        return result;
    }
};