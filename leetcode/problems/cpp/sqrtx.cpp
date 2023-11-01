// by @codeAbinash
// Time : O(log n)
// Space : O(1)

#include "climits"

class Solution {
  public:
   int mySqrt(int x) {
      long root = x;
      while (root * root > x)
         root = (root + x / root) / 2;
      return root;
   }
};
