// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int len = s.size();
        vector<int>result;
        int low = 0;
        int high = len;
        for(int i =0; i < len; i++){
            if(s[i] == 'I'){
                result.push_back(low);
                low++;
            }
            else{
                result.push_back(high);
                high--;
            }
        }
        result.push_back(low);
        return result;
    }
};