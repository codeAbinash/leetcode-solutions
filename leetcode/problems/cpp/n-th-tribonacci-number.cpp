// by @codeAbinash
// Time : O(n)
// Space : O(1)

using namespace std;
class Solution {
public:
   int tribonacci(int n) {
      if (n == 0) return 0;
      int t0 = 0, t1 = 1, t2 = 1;
      for (int i = 2; i < n;i++) {
         int tmp = t2;
         t2 = t0 + t1 + t2;
         t0 = t1;
         t1 = tmp;
      }
      return t2;
   }
};