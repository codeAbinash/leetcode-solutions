#include "iostream"
using namespace std;


// Using Bit Manipulation
class Solution {
public:
   double myPow(double x, int n) {
      if (n == 0)  return 1;
      if (n == 1) return x;
      double ans = 1;
      int num = abs(n);
      while (num > 0) {
         if (num & 1)
            ans *= x;
         num >>= 1;
         x *= x;
      }
      return n > 0 ? ans : 1 / ans;
   }
};


// Using Recursion
class Solution {
public:
   double myPow(double x, int n) {
      if (n == 0) return 1;
      if (n == 1) return x;
      if (n > 0) {
         if (n & 1)
            return x * myPow(x * x, n >> 1);
         return myPow(x * x, n >> 1);
      }
      n = abs(n);
      if (n & 1) return 1 / (x * myPow(x * x, n >> 1));
      return 1 / myPow(x * x, n >> 1);
   }
};