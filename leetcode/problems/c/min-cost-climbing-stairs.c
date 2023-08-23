// by @codeAbinash
// Time : O(n)
// Space : O(1)

inline int min(int a, int b) { return a > b ? b : a; }

int minCostClimbingStairs(int* cost, int costSize) {
   int i = costSize - 3;
   while (i >= 0) {
      int m = cost[i] + cost[i + 1];
      int n = cost[i] + cost[i + 2];
      cost[i] = m < n ? m : n;
      i--;
   }
   return cost[0] > cost[1] ? cost[1] : cost[0];
}