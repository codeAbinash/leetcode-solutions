class Solution {

  public int subsetXORSum(int[] nums) {
    return backtrack(nums, 0, 0);
  }

  int backtrack(int[] nums, int start, int xor) {
    if (start >= nums.length)
      return xor;
    return backtrack(nums, start + 1, xor) + backtrack(nums, start + 1, xor ^ nums[start]);
  }
}

class Solution2 {
  public int subsetXORSum(int[] nums) {
    int sum = 0;
    int n = nums.length;
    for (int num : nums) {
      sum |= num;
    }
    return sum * (1 << (n - 1));
  }
}