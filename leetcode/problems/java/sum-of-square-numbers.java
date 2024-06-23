class Solution {
  public boolean judgeSquareSum(int c) {
    for (int d = 2; d * d <= c; d++) {
      if (c % d == 0) {
        int e = 0;
        while (c % d == 0) {
          e++;
          c /= d;
        }
        if (d % 4 == 3 && e % 2 != 0)
          return false;
      }
    }
    return c % 4 != 3;
  }
}