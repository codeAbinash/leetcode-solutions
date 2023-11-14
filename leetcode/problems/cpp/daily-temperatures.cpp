// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
using namespace std;

class Solution {
  public:
   vector<int> dailyTemperatures(vector<int>& temperatures) {
      int size = temperatures.size();
      vector<int> ans(size, 0);
      vector<int> stack;
      for (int i = 0; i < size; i++) {
         while (!stack.empty() && temperatures[stack.back()] < temperatures[i]) {
            ans[stack.back()] = i - stack.back();
            stack.pop_back();
         }
         stack.push_back(i);
      }
      return ans;
   }
};
