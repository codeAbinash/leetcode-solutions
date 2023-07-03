// by @codeAbinash

class Solution {
   public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0, calc = -1;
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        for (int i = 0; i < g.size(); i++)
            while (++calc < s.size())
                if(s[calc] >= g[i]){
                    count ++;
                    break;
                }
        return count;
    }   
};