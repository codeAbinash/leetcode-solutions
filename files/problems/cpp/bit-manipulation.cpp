// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        for(auto &num : encoded){
            swap(num, first);
            first ^= num;
        }
        encoded.push_back(first);
        return encoded;
    }
};