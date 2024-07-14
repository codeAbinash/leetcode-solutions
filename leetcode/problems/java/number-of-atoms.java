import java.util.*;

class Solution {
  public String countOfAtoms(String formula) {
    Stack<Map<String, Integer>> stack = new Stack<>();
    stack.push(new HashMap<>());
    int len = formula.length();

    for (int i = 0; i < len;) {
      if (formula.charAt(i) == '(') {
        stack.push(new HashMap<>());
        i++;
      } else if (formula.charAt(i) == ')') {
        Map<String, Integer> top = stack.pop();
        i++;
        int start = i;
        while (i < len && Character.isDigit(formula.charAt(i)))
          i++;
        int multiplier = start < i ? Integer.parseInt(formula.substring(start, i)) : 1;
        for (String key : top.keySet()) {
          stack.peek().put(key, stack.peek().getOrDefault(key, 0) + top.get(key) * multiplier);
        }
      } else {
        int start = i;
        i++;
        while (i < len && Character.isLowerCase(formula.charAt(i)))
          i++;
        String element = formula.substring(start, i);
        start = i;
        while (i < len && Character.isDigit(formula.charAt(i)))
          i++;
        int count = start < i ? Integer.parseInt(formula.substring(start, i)) : 1;
        stack.peek().put(element, stack.peek().getOrDefault(element, 0) + count);
      }
    }

    Map<String, Integer> result = stack.pop();
    List<String> elements = new ArrayList<>(result.keySet());
    Collections.sort(elements);
    StringBuilder sb = new StringBuilder();
    for (String element : elements) {
      sb.append(element);
      int count = result.get(element);
      if (count > 1)
        sb.append(count);
    }
    return sb.toString();
  }
}