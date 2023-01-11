// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
   public:
    string removeStars(string s) {
        string f;
        for (auto &ch : s) {
            if (ch == '*')
                f.pop_back();
            else
                f.push_back(ch);
        }
        return f;
    }
};