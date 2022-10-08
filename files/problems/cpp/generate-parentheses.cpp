// by @codeAbinash

class Solution {
   public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "";
        generate(ans, str, n, n);
        return ans;
    }
    void generate(vector<string>& ans, string& str, int open, int close) {
        if (open == 0 && close == 0) {
            ans.push_back(str);
            return;
        }
        if (open > 0) {
            str.push_back('(');
            generate(ans, str, open - 1, close);
            str.pop_back();
        }
        if (close > 0 && open < close) {
            str.push_back(')');
            generate(ans, str, open, close - 1);
            str.pop_back();
        }
    }
};