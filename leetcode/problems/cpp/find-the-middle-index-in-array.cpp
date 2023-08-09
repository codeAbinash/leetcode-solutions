// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
#include "numeric"
using namespace std;

class Solution {
public:
   int findMiddleIndex(vector<int>& nums) {
      int leftSum = 0, rightSum = 0;
      int size = nums.size();

      for (int i = 0; i < size; i++)
         rightSum += nums[i];

      for (int i = 0; i < size; i++) {
         rightSum -= nums[i];
         if (leftSum == rightSum)
            return i;
         leftSum += nums[i];
      }
      return -1;
   }
};