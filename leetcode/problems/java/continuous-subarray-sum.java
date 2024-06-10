import java.util.Map;
import java.util.HashMap;

class Solution {
  public boolean checkSubarraySum(int[] nums, int k) {
    Map<Integer, Integer> remainderIndex = new HashMap<>();
    remainderIndex.put(0, -1);

    int total = 0;
    for (int i = 0; i < nums.length; i++) {
      total += nums[i];
      int r = total % k;

      if (!remainderIndex.containsKey(r)) {
        remainderIndex.put(r, i);
      } else if (i - remainderIndex.get(r) > 1) {
        return true;
      }
    }

    return false;
  }
}