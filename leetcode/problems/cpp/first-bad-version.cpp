// by @codeAbinash
// Time : O(log n)
// Space : O(1)

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
  public:
   int firstBadVersion(int n) {
      int left = 1, right = n, mid;
      while (left < right) {
         mid = left + (right - left) / 2;
         if (isBadVersion(mid))
            right = mid;
         else
            left = mid + 1;
      }
      return left;
   }
};
