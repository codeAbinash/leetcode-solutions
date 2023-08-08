// by @codeAbinash
// Time : O(1)
// Space : O(1)

#include "climits"
#include "bits/std_abs.h"

using namespace std;
class Solution {
public:
   int reverse(int x) {
      bool isNegative = x < 0;
      long int reversed = 0;
      x = abs(x);
      while (x) {
         reversed = reversed * 10 + x % 10;
         x /= 10;
      }
      if (reversed > INT_MAX || reversed < INT_MIN)
         return 0;
      return isNegative ? -reversed : reversed;
   }
};