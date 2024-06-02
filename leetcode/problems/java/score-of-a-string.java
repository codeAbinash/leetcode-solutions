class Solution {
  public int scoreOfString(String s) {
    int score = 0;
    int n = s.length();
    for (int i = 0; i < n - 1; i++) {
      int diff = Math.abs(s.charAt(i + 1) - s.charAt(i));
      score += diff;
    }
    return score;
  }
}