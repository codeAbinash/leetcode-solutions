// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int minOperations(vector<string>& logs) {
        int len = logs.size();
        int state = 0;
        for (auto &log : logs)
            if (log== "../") {
                if (state != 0) state -= 1;
            } else if (log == "./") {
                // Same directory
            } else
                state++;
        return state;
    }
};