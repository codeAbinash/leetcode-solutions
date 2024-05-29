class Solution {
  public int rob(int[] nums) {
    if (nums.length == 1) {
      return nums[0];
    }
    if (nums.length == 2) {
      return Math.max(nums[0], nums[1]);
    }

    return Math.max(helper(nums, 0, nums.length - 2), helper(nums, 1, nums.length - 1));
  }

  int helper(int[] nums, int start, int end) {
    int n = nums.length;
    int[] dp = new int[n];
    dp[start] = nums[start];
    dp[start + 1] = Math.max(nums[start], nums[start + 1]);
    for (int i = start + 2; i <= end; i++) {
      dp[i] = Math.max(dp[i - 1], dp[i - 2] + nums[i]);
    }
    return dp[end];
  }
}