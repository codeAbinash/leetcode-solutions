class Solution {
  public int numDecodings(String s) {
    int dp[] = new int[s.length() + 1];
    return helper(s, 0, dp);
  }

  int helper(String s, int start, int[] dp) {
    if (start == s.length()) {
      return 1;
    }

    if (dp[start] != 0) {
      return dp[start];
    }

    if (s.charAt(start) == '0') {
      return 0;
    }

    int res = helper(s, start + 1, dp);
    if (start < s.length() - 1 && (s.charAt(start) == '1' || (s.charAt(start) == '2' && s.charAt(start + 1) <= '6'))) {
      res += helper(s, start + 2, dp);
    }

    dp[start] = res;
    return res;
  }
}

class Solution2 {
  public int numDecodings(String s) {
    int len = s.length();
    int dp[] = new int[len + 1];
    dp[len] = 1;
    dp[len - 1] = s.charAt(len - 1) == '0' ? 0 : 1;

    for (int i = len - 2; i >= 0; i--) {
      if (s.charAt(i) == '0') {
        continue;
      }

      dp[i] = dp[i + 1];
      if (s.charAt(i) == '1' || (s.charAt(i) == '2' && s.charAt(i + 1) <= '6')) {
        dp[i] += dp[i + 2];
      }
    }

    return dp[0];
  }
}