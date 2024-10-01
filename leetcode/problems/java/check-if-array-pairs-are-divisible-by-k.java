class Solution {
  public boolean canArrange(int[] arr, int k) {
    int freq[] = new int[k];
    for (int n : arr)
      freq[(n % k + k) % k]++;

    if (freq[0] % 2 != 0) // k - 0 = k and it does not exist in the array
      return false;

    for (int i = 1; i <= k / 2; i++)
      if (freq[i] != freq[k - i])
        return false;

    return true;
  }
}