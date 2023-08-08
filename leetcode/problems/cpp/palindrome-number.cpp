// by @codeAbinash
// Time : O(log(n))
// Space : O(1)

class Solution {
public:
   bool isPalindrome(int x) {
      if (x < 0) return false;
      long int reversed = 0;
      int num = x;
      while (x) {
         reversed = reversed * 10 + x % 10;
         x /= 10;
      }
      return num == reversed;
   }
};