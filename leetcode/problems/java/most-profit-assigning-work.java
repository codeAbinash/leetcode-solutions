import java.util.Arrays;

class Solution {
  public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
    int n = difficulty.length;
    int[][] jobs = new int[n][2];
    for (int i = 0; i < n; i++) {
      jobs[i] = new int[] { difficulty[i], profit[i] };
    }
    Arrays.sort(jobs, (a, b) -> a[0] - b[0]);
    Arrays.sort(worker);
    int i = 0, max = 0, res = 0;
    for (int w : worker) {
      while (i < n && jobs[i][0] <= w) {
        max = Math.max(max, jobs[i++][1]);
      }
      res += max;
    }
    return res;
  }
}