// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
   public:
    int numIdenticalPairs(vector<int>& nums) {
        int hash[101] = {}, count = 0;
        for (int i : nums) 
            count += hash[i]++;
        return count;
    }
};