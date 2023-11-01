// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
using namespace std;

class Solution {
  public:
   vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> result(2, -1);
      int start = 0, end = nums.size() - 1;
      int mid;

      while (start <= end) {
         mid = start + (end - start) / 2;
         if (nums[mid] == target)
            result[0] = mid, end = mid - 1;
         else if (nums[mid] < target)
            start = mid + 1;
         else
            end = mid - 1;
      }

      start = 0;
      end = nums.size() - 1;

      while (start <= end) {
         int mid = start + (end - start) / 2;
         if (nums[mid] == target)
            result[1] = mid, start = mid + 1;
         else if (nums[mid] < target)
            start = mid + 1;
         else
            end = mid - 1;
      }

      return result;
   }
};
