class Solution {
  public boolean isHappy(int n) {
    int digit = 0, sum = 0;
    if (n == 1 || n == 7)
      return true;
    if (n < 10)
      return false;

    while (n > 0) {
      digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }

    return isHappy(sum);

  }

}