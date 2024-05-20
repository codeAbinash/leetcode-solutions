import java.util.List;
import java.util.ArrayList;

class Solution {
  private String[] map = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

  public List<String> letterCombinations(String digits) {
    List<String> res = new ArrayList<>();
    if (digits.length() == 0) {
      return res;
    }
    backtrack(digits, 0, new StringBuilder(), res);
    return res;
  }

  private void backtrack(String s, int start, StringBuilder sb, List<String> res) {
    if (start == s.length()) {
      res.add(sb.toString());
      return;
    }
    String letters = map[s.charAt(start) - '0'];
    for (int i = 0; i < letters.length(); i++) {
      sb.append(letters.charAt(i));
      backtrack(s, start + 1, sb, res);
      sb.deleteCharAt(sb.length() - 1);
    }
  }
}