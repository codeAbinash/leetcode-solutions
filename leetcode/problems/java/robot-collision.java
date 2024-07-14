import java.util.*;

class Solution {

  public List<Integer> survivedRobotsHealths(int[] positions, int[] healths, String directions) {
    int n = positions.length;
    Integer[] indices = new Integer[n];
    List<Integer> result = new ArrayList<>();
    Stack<Integer> stack = new Stack<>();

    for (int index = 0; index < n; ++index)
      indices[index] = index;

    Arrays.sort(indices, (lhs, rhs) -> Integer.compare(positions[lhs], positions[rhs]));

    for (int currentIndex : indices) {
      if (directions.charAt(currentIndex) == 'R')
        stack.push(currentIndex);
      else {
        while (!stack.isEmpty() && healths[currentIndex] > 0) {
          int topIndex = stack.pop();
          if (healths[topIndex] > healths[currentIndex]) {
            healths[topIndex] -= 1;
            healths[currentIndex] = 0;
            stack.push(topIndex);
          } else if (healths[topIndex] < healths[currentIndex]) {
            healths[currentIndex] -= 1;
            healths[topIndex] = 0;
          } else {
            healths[currentIndex] = 0;
            healths[topIndex] = 0;
          }
        }
      }
    }

    for (int index = 0; index < n; ++index)
      if (healths[index] > 0)
        result.add(healths[index]);
    return result;
  }
}