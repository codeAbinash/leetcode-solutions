// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "vector"
using namespace std;

class Solution {
public:
   int minCostClimbingStairs(vector<int>& cost) {
      int i = cost.size() - 3;
      while (i >= 0) {
         int m = cost[i] + cost[i + 1];
         int n = cost[i] + cost[i + 2];
         cost[i] = m < n ? m : n;
         i--;
      }
      return cost[0] > cost[1] ? cost[1] : cost[0];
   }
};