// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
   public:
    string removeDuplicates(string s) {
        string f = "";
        int len = s.length();

        for (int i = 0; i < len; i++) {
            if (f.length() == 0 || f[f.length() - 1] != s[i])
                f.push_back(s[i]);
            else
                f.pop_back();
        }
        return f;
    }
};