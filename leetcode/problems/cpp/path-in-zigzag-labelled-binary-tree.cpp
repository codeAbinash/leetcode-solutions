// by @codeAbinash

#include "vector"
#include "algorithm"
#include "cmath"
using namespace std;


class Solution {
public:
   vector<int> pathInZigZagTree(int label) {
      vector<int> ans;
      int height = log2(label);
      ans.push_back(label);

      while (height) {
         int left = pow(2, height - 1);
         int right = pow(2, height) - 1;
         label = left + right - label / 2;
         ans.push_back(label);
         height--;
      }

      reverse(ans.begin(), ans.end());
      return ans;
   }
};



class Solution {
public:
   vector<int> pathInZigZagTree(int label) {
      int l = label;
      int n = 0;
      while (l) {
         n++;
         l >>= 1;
      }

      vector<int> ans(n);
      ans[n - 1] = label;
      for (int i = n - 2; i >= 0;i--) {
         ans[i] = (3 * (1 << (i + 1)) - ans[i + 1] - 1) / 2;
      }
      return ans;
   }
};
