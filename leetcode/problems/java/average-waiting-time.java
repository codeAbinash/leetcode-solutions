class Solution {
  public double averageWaitingTime(int[][] customers) {
    int n = customers.length;
    long time = 0;
    long wait = 0;
    for (int i = 0; i < n; i++) {
      time = Math.max(time, (long) customers[i][0]) + customers[i][1];
      wait += time - customers[i][0];
    }
    return (double) wait / n;
  }
}