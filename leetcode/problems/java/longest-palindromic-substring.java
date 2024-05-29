class Solution {
  public String longestPalindrome(String s) {
    int len = s.length();
    int left, right, maxLeft = 0, maxRight = 0, maxLen = 0;

    for (int i = 0; i < len; i++) {
      left = i;
      right = i;
      while (left >= 0 && right < len && s.charAt(left) == s.charAt(right)) {
        left--;
        right++;
      }
      if (right - left - 1 > maxLen) {
        maxLen = right - left - 1;
        maxLeft = left + 1;
        maxRight = right - 1;
      }

      left = i;
      right = i + 1;
      while (left >= 0 && right < len && s.charAt(left) == s.charAt(right)) {
        left--;
        right++;
      }
      if (right - left - 1 > maxLen) {
        maxLen = right - left - 1;
        maxLeft = left + 1;
        maxRight = right - 1;
      }
    }

    return s.substring(maxLeft, maxRight + 1);
  }
}