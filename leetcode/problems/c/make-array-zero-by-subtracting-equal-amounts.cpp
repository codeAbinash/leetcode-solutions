// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "unordered_set"
#include "vector"

using namespace std;

class Solution {
 public:
   int minimumOperations(vector<int>& nums) {
      unordered_set<int> s;
      for (int num : nums)
         if (num != 0) s.insert(num);
      return s.size();
   }
};
