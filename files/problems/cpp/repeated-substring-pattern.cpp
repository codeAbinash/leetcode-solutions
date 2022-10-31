class Solution {
   public:
    bool repeatedSubstringPattern(string s) {
        int size = s.size();
        string str = s.substr(1, size - 1) + s.substr(0, size - 1);
        return str.find(s) != -1;
    }
};