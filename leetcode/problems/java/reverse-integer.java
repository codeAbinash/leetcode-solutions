class Solution {
  public int reverse(int x) {
    int MAX = Integer.MAX_VALUE; // 2147483647
    int MIN = Integer.MIN_VALUE; // -2147483648
    int result = 0;
    while (x != 0) {
      int digit = x % 10;
      x /= 10;
      if (result > MAX / 10 || (result == MAX / 10 && MAX % 10 < digit)) {
        return 0;
      }
      if (result < MIN / 10 || (result == MIN / 10 && MIN % 10 > digit)) {
        return 0;
      }
      result = result * 10 + digit;
    }
    return result;
  }
}