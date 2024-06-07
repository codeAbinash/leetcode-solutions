import java.util.HashMap;
import java.util.Map;

class Solution {
  public int longestPalindrome(String s) {
    Map<Character, Integer> map = new HashMap<>();
    for (char c : s.toCharArray()) {
      map.put(c, map.getOrDefault(c, 0) + 1);
    }

    int result = 0;
    boolean hasOdd = false;
    for (int count : map.values()) {
      if (count % 2 == 0) {
        result += count;
      } else {
        result += count - 1;
        hasOdd = true;
      }
    }

    return hasOdd ? result + 1 : result;
  }
}