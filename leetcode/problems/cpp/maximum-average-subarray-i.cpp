// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
   double findMaxAverage(vector<int>& nums, int k) {
      double sum = 0, result = INT_MIN;
      int size = nums.size();

      for (int i = 0; i < size; i++) {
         if (i < k)sum += nums[i];
         else {
            result = max(sum, result);
            sum += nums[i] - nums[i - k];
         }
      }

      result = max(sum, result);
      return result / k;
   }
};