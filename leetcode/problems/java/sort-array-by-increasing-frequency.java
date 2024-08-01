class Solution {
  public int[] frequencySort(int[] nums) {
    int count[] = new int[201];
    for (int n : nums)
      count[n + 100]++;
    for (int i = nums.length - 1; i >= 0;) {
      int m = 0, ind = -1;
      for (int j = 0; j < 201; j++) {
        if (count[j] > m) {
          m = count[j];
          ind = j;
        }
      }
      for (int j = 0; j < m; j++)
        nums[i--] = ind - 100;
      count[ind] = 0;
    }
    return nums;
  }
}