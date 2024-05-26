class Solution {
  public String multiply(String num1, String num2) {
    int n = num1.length();
    int m = num2.length();
    int[] result = new int[n + m];
    for (int i = n - 1; i >= 0; i--) {
      for (int j = m - 1; j >= 0; j--) {
        int mul = (num1.charAt(i) - '0') * (num2.charAt(j) - '0');
        int sum = mul + result[i + j + 1];
        result[i + j] += sum / 10;
        result[i + j + 1] = sum % 10;
      }
    }
    StringBuilder sb = new StringBuilder();
    for (int i : result) {
      if (!(sb.length() == 0 && i == 0)) {
        sb.append(i);
      }
    }
    return sb.length() == 0 ? "0" : sb.toString();
  }
}