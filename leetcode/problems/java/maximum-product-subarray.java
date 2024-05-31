class Solution {
  public int maxProduct(int[] nums) {
    int res = nums[0];
    int curMax = 1, curMin = 1;

    for (int num : nums) {
      if (num < 0) {
        int temp = curMax;
        curMax = curMin;
        curMin = temp;
      }

      curMax = Math.max(curMax * num, num);
      curMin = Math.min(curMin * num, num);

      res = Math.max(res, curMax);
    }

    return res;
  }
}