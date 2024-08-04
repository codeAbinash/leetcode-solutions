import java.util.Arrays;

class Solution {
  public int minSwaps(int[] nums) {
    int k = Arrays.stream(nums).sum();
    int n = nums.length;
    int count = 0;
    for (int i = 0; i < k; ++i)
      count += nums[i];
    int max = count;
    for (int i = k; i < n + k; ++i) {
      count += nums[i % n] - nums[(i - k + n) % n];
      max = Math.max(max, count);
    }
    return k - max;
  }
}