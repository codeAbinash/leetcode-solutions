
import java.util.Arrays;

class Solution {
  public int smallestDistancePair(int[] numbers, int k) {
    Arrays.sort(numbers);
    int minDist = 0;
    int maxDistance = numbers[numbers.length - 1] - numbers[0];

    while (minDist < maxDistance) {
      int mid = minDist + (maxDistance - minDist) / 2;
      int count = countPairsWithinDistance(numbers, mid);
      if (count < k)
        minDist = mid + 1;
      else
        maxDistance = mid;
    }
    return minDist;
  }

  private int countPairsWithinDistance(int[] numbers, int targetDistance) {
    int count = 0;
    int left = 0;
    for (int right = 1; right < numbers.length; right++) {
      while (numbers[right] - numbers[left] > targetDistance)
        left++;
      count += right - left;
    }
    return count;
  }
}