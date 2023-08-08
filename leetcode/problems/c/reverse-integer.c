// by @codeAbinash
// Time : O(1)
// Space : O(1)

#include "limits.h"

int reverse(int x) {
   long reversed = 0;
   while (x) {
      reversed = reversed * 10 + x % 10;
      x /= 10;
   }
   if (reversed > INT_MAX || reversed < INT_MIN)
      return 0;
   return x < 0 ? -reversed : reversed;
}