import java.util.HashSet;
import java.util.Set;

class Solution {
  public long maximumSubarraySum(int[] nums, int k) {
    int n = nums.length, begin = 0;
    long sum = 0, maxSum = 0;
    Set<Integer> map = new HashSet<>();

    for (int end = 0; end < n; end++) {
      if (!map.contains(nums[end])) {
        sum += nums[end];
        map.add(nums[end]);

        if (end - begin + 1 == k) {
          maxSum = Math.max(maxSum, sum);
          sum -= nums[begin];
          map.remove(nums[begin]);
          begin++;
        }
      } else {
        while (nums[begin] != nums[end]) {
          sum -= nums[begin];
          map.remove(nums[begin]);
          begin++;
        }
        begin++;
      }
    }
    return maxSum;
  }
}