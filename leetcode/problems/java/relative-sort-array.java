class Solution {
  public int[] relativeSortArray(int[] arr1, int[] arr2) {
    int[] count = new int[1001];
    for (int num : arr1) {
      count[num]++;
    }
    int i = 0;
    for (int num : arr2) {
      while (count[num]-- > 0) {
        arr1[i++] = num;
      }
    }
    for (int num = 0; num < count.length; num++) {
      while (count[num]-- > 0) {
        arr1[i++] = num;
      }
    }
    return arr1;
  }
}