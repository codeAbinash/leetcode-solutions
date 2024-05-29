class Solution {
  public int minCostClimbingStairs(int[] cost) {
    int i = cost.length - 3;
    while (i >= 0) {
      int m = cost[i] + cost[i + 1];
      int n = cost[i] + cost[i + 2];
      cost[i] = Math.min(m, n);
      i--;
    }
    return Math.min(cost[0], cost[1]);
  }
}