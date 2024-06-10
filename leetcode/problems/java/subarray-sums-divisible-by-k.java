class Solution {
  public int subarraysDivByK(int[] nums, int k) {
    int[] fre = new int[k];
    int sum = 0;
    for (int i = 0; i < nums.length; i++) {
      sum += ((nums[i] % k) + k) % k;
      fre[sum % k]++;
    }
    int res = fre[0];
    for (int i : fre) {
      res += (i * (i - 1)) / 2;
    }
    return res;
  }
}