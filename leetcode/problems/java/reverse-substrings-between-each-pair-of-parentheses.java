import java.util.*;

class Solution {
  public String reverseParentheses(String s) {
    ArrayDeque<String> stack = new ArrayDeque<>();
    StringBuilder sb = new StringBuilder();
    for (char c : s.toCharArray()) {
      if (c == '(') {
        stack.push(sb.toString());
        sb.setLength(0);
      } else if (c == ')') {
        sb.reverse();
        sb.insert(0, stack.pop());
      } else {
        sb.append(c);
      }
    }
    return sb.toString();
  }
}