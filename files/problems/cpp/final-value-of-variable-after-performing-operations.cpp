// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value = 0;
        for(auto &str : operations){
            if(str == "++X" || str == "X++")
                value++;
            else
                value--;
        }
        return value;
    }
};