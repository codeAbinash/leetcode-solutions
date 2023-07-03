// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int hash[101] = {0};
        int len = nums.size();
        for (int i = 0; i < len; i++) hash[nums[i]]++;

        int pair = 0, nonPair = 0;
        for (int i = 0; i < 101; i++) {
            pair += hash[i] / 2;
            hash[i] = hash[i] % 2;
            nonPair += hash[i];
        }
        vector<int> answer = {pair, nonPair};
        return answer;
    }
};