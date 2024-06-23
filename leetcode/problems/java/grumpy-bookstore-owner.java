class Solution {
  public int maxSatisfied(int[] customers, int[] grumpy, int minutes) {
    int n = grumpy.length;
    int i = 0;
    int cur = 0;
    int max = 0;

    for (int j = 0; j < n; j++) {
      cur += customers[j] * grumpy[j];
      max = Math.max(cur, max);
      if (j >= minutes - 1)
        cur -= customers[i] * grumpy[i++];

    }
    int res = max;
    for (i = 0; i < grumpy.length; i++)
      res += customers[i] * (1 - grumpy[i]);
    return res;
  }
}