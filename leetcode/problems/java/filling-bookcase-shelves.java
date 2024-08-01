class Solution {
  public int minHeightShelves(int[][] books, int shelfWidth) {
    int n = books.length;
    int[] dp = new int[n + 1];
    for (int i = 1; i <= n; ++i) {
      int w = books[i - 1][0];
      int h = books[i - 1][1];
      dp[i] = dp[i - 1] + h;
      for (int j = i - 1; j > 0 && w + books[j - 1][0] <= shelfWidth; --j) {
        w += books[j - 1][0];
        h = Math.max(h, books[j - 1][1]);
        dp[i] = Math.min(dp[i], dp[j - 1] + h);
      }
    }
    return dp[n];
  }
}