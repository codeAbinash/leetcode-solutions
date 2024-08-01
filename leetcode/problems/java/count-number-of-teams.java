class Solution {
  public int numTeams(int[] rating) {
    int n = rating.length;
    int count = 0;
    for (int i = 0; i < n; i++) {
      int leftSmaller = 0, leftLarger = 0, rightSmaller = 0, rightLarger = 0;
      for (int j = 0; j < i; j++) {
        if (rating[j] < rating[i]) {
          leftSmaller++;
        } else if (rating[j] > rating[i]) {
          leftLarger++;
        }
      }
      for (int j = i + 1; j < n; j++) {
        if (rating[j] < rating[i]) {
          rightSmaller++;
        } else if (rating[j] > rating[i]) {
          rightLarger++;
        }
      }
      count += leftSmaller * rightLarger + leftLarger * rightSmaller;
    }
    return count;
  }
}