import java.util.Arrays;

class Solution {
  public int minDifference(int[] nums) {
    int n = nums.length;
    if (n <= 4)
      return 0;
    if (n == 5)
      return 1;
    Arrays.sort(nums);
    int x1 = nums[n - 4] - nums[0];
    int x2 = nums[n - 3] - nums[1];
    int x3 = nums[n - 2] - nums[2];
    int x4 = nums[n - 1] - nums[3];

    return Math.min(x4, Math.min(x1, Math.min(x2, x3)));
  }
}