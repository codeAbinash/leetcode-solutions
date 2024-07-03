class Solution {
  public int minKBitFlips(int[] nums, int k) {
    int n = nums.length, flipped = 0, res = 0;
    int[] isFlipped = new int[n];
    for (int i = 0; i < nums.length; ++i) {
      if (i >= k)
        flipped ^= isFlipped[i - k];
      if (flipped == nums[i]) {
        if (i + k > nums.length)
          return -1;
        isFlipped[i] = 1;
        flipped ^= 1;
        res++;
      }
    }
    return res;
  }
}