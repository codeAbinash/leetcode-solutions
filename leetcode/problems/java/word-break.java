import java.util.List;
import java.util.Arrays;

class Solution {
  public boolean wordBreak(String s, List<String> wordDict) {
    int[] dp = new int[s.length()];
    Arrays.fill(dp, -1);
    return dfs(s, 0, wordDict, dp);
  }

  public boolean dfs(String s, int index, List<String> wordDict, int[] dp) {
    if (index >= s.length())
      return true;
    if (dp[index] != -1)
      return dp[index] == 1;

    int match = 0;
    for (int i = 0; i < wordDict.size(); i++) {
      String curr = wordDict.get(i);
      if (s.startsWith(curr, index) && dfs(s, index + curr.length(), wordDict, dp)) {
        match = 1;
        break;
      }
    }
    dp[index] = match;
    return match == 1;
  }
}