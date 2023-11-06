// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
  public:
   int maxProfit(vector<int>& prices) {
      int min = prices[0], profit = 0, max = 0;

      for (int i = 1; i < prices.size(); i++) {
         if (prices[i] < min)
            min = prices[i];
         profit = prices[i] - min;
         if (max < profit)
            max = profit;
      }
      return max;
   }
};
