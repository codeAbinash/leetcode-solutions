// by @codeAbinash

class Solution {
  public:
   int climbStairs(int n) {
      if (n <= 2) return n;
      int a = 1, b = 2, c;
      for (int i = 3; i <= n; ++i) {
         c = a + b;
         a = b;
         b = c;
      }
      return c;
   }
};

// Another solution
class Solution {
   int climb(int n, int* dp) {
      if (n <= 1) return 1;
      if (dp[n] > 0) return dp[n];
      return dp[n] = climb(n - 1, dp) + climb(n - 2, dp);
   }
  public:
   int climbStairs(int n) {
      int dp[46] = {0};
      return climb(n, dp);
   }
};
