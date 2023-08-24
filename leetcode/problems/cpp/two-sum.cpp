// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "unordered_map"
using namespace std;

class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map <int, int> map;
      int i = 0;
      for (auto num : nums) {
         int t = target - num;
         auto searched = map.find(t);
         if (searched != map.end())
            return  { (*searched).second , i };
         map[nums[i]] = i;
         i++;
      }
      return { };
   }
};