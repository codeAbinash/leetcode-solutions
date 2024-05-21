import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

class Solution {
  public List<List<Integer>> subsetsWithDup(int[] nums) {
    List<List<Integer>> result = new ArrayList<>();
    Arrays.sort(nums);
    backtrack(result, new ArrayList<>(), nums, 0);
    return result;
  }

  void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums, int i) {
    if (i == nums.length) {
      result.add(new ArrayList<>(tempList));
      return;
    }
    tempList.add(nums[i]);
    backtrack(result, tempList, nums, i + 1);
    tempList.remove(tempList.size() - 1);
    while (i + 1 < nums.length && nums[i] == nums[i + 1]) {
      i++;
    }
    backtrack(result, tempList, nums, i + 1);
  }
}