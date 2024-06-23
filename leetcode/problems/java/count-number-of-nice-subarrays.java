class Solution {
  public int numberOfSubarrays(int[] nums, int k) {
    int n = nums.length;
    int[] odd = new int[n + 2];
    int ans = 0;
    int count = 0;
    odd[0] = 1;
    for (int i = 0; i < n; i++) {
      if (nums[i] % 2 == 1) {
        count++;
      }
      odd[count]++;
      if (count >= k) {
        ans += odd[count - k];
      }
    }
    return ans;
  }
}