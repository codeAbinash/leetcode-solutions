class Solution {
  public int countSubstrings(String s) {
    int res = 0;
    int len = s.length();

    for (int i = 0; i < len; i++) {
      int left = i, right = i;
      while (left >= 0 && right < len && s.charAt(left) == s.charAt(right)) {
        res++;
        left--;
        right++;
      }
    }

    for (int i = 0; i < len - 1; i++) {
      int left = i, right = i + 1;
      while (left >= 0 && right < len && s.charAt(left) == s.charAt(right)) {
        res++;
        left--;
        right++;
      }
    }

    return res;
  }
}