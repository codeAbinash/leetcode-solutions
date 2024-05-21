import java.util.List;
import java.util.ArrayList;

class Solution {
  public List<List<String>> partition(String s) {
    List<List<String>> result = new ArrayList<>();
    List<String> currentList = new ArrayList<>();
    backtrack(result, s, 0, currentList);
    return result;
  }

  public void backtrack(List<List<String>> result, String s, int start, List<String> currentList) {
    if (start >= s.length())
      result.add(new ArrayList<>(currentList));
    for (int end = start; end < s.length(); end++) {
      if (isPalindrome(s, start, end)) {
        currentList.add(s.substring(start, end + 1));
        backtrack(result, s, end + 1, currentList);
        currentList.remove(currentList.size() - 1);
      }
    }
  }

  public boolean isPalindrome(String s, int low, int high) {
    while (low < high) {
      if (s.charAt(low++) != s.charAt(high--))
        return false;
    }
    return true;
  }
}