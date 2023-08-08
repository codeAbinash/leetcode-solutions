// by @codeAbinash
// Time : O(n)
// Space : O(1)


#include "vector"
using namespace std;
#define m 1337;
#define phi_m 1140;

class Solution {
   int binExp(int a, int b) {
      int ans = 1;
      while (b > 0) {
         if (b & 1) ans = (ans * 1LL * a) % m;
         a = (a * 1LL * a) % m;
         b >>= 1;
      }
      return ans;
   }
public:
   int superPow(int a, vector<int>& b) {
      int bmod = 0;
      for (int bi : b)
         bmod = (bmod * 10 + bi) % phi_m;
      return binExp(a, bmod);
   }
};