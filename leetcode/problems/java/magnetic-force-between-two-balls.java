import java.util.Arrays;

class Solution {
  public int maxDistance(int[] position, int m) {
    Arrays.sort(position);
    int n = position.length;
    int left = 1;
    int right = position[n - 1] - position[0];
    while (left < right) {
      int mid = right - (right - left) / 2;
      if (isValid(position, mid, m)) {
        left = mid;
      } else {
        right = mid - 1;
      }
    }
    return left;
  }

  private boolean isValid(int[] position, int mid, int m) {
    int count = 1;
    int last = position[0];
    for (int i = 1; i < position.length; i++) {
      if (position[i] - last >= mid) {
        last = position[i];
        count++;
      }
    }
    return count >= m;
  }
}