import java.util.*;

class Solution {
  public int[] sortJumbled(int[] mapping, int[] nums) {
    List<int[]> mappedList = new ArrayList<>();
    for (int i = 0; i < nums.length; i++) {
      String s = Integer.toString(nums[i]);
      StringBuilder n = new StringBuilder();
      for (char ch : s.toCharArray())
        n.append(mapping[ch - '0']);
      mappedList.add(new int[] { nums[i], Integer.parseInt(n.toString()), i });
    }

    mappedList.sort((a, b) -> {
      if (a[1] != b[1])
        return Integer.compare(a[1], b[1]);
      else
        return Integer.compare(a[2], b[2]);
    });

    int[] sortedNums = new int[nums.length];
    for (int i = 0; i < mappedList.size(); i++)
      sortedNums[i] = mappedList.get(i)[0];
    return sortedNums;
  }
}