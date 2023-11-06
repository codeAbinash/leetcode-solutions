// by @codeAbinash
// Time : O(log n)
// Space : O(n)

class Solution {
  public:
   bool isPowerOfThree(int n) {
      if (n <= 0) return false;
      while (n != 1) {
         if (n % 3 != 0) return false;
         n /= 3;
      }
      return true;
   }
};

// Another solution

class Solution {
  public:
   bool isPowerOfThree(int n) {
      if (n == 1) return true;
      if (n == 0) return false;
      return n % 3 == 0 && isPowerOfThree(n / 3);
   }
};
