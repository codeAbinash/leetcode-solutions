// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "numeric"
using namespace std;

class Solution {
public:
   int pivotIndex(vector<int>& nums) {
      int leftSum = 0;
      int size = nums.size();
      int rightSum = accumulate(nums.begin(), nums.end(), 0);
      for (int i = 0; i < size; i++) {
         rightSum -= nums[i];
         if (leftSum == rightSum)
            return i;
         leftSum += nums[i];
      }
      return -1;
   }
};