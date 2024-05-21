import java.util.List;
import java.util.ArrayList;

class Solution {
  public List<List<Integer>> subsets(int[] nums) {
    List<List<Integer>> res = new ArrayList<>();
    backtrack(res, new ArrayList<>(), nums, 0);
    return res;
  }

  void backtrack(List<List<Integer>> res, List<Integer> temp, int[] nums, int start) {
    if (start >= nums.length) {
      res.add(new ArrayList<>(temp));
      return;
    }
    temp.add(nums[start]);
    backtrack(res, temp, nums, start + 1);
    temp.remove(temp.size() - 1);
    backtrack(res, temp, nums, start + 1);
  }
}