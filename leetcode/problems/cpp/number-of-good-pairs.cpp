// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "unordered_map"
using namespace std;

class Solution {
public:
   int numIdenticalPairs(vector<int>& nums) {
      unordered_map<int, int> m;
      int ans = 0;
      for (int num : nums)
         ans += m[num]++;
      return ans;
   }
};

class Solution {
public:
   int numIdenticalPairs(vector<int>& nums) {
      int hash[101] = {}, count = 0;
      for (int i : nums)
         count += hash[i]++;
      return count;
   }
};
