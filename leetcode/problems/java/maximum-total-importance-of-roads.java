import java.util.*;

class Solution {
  public long maximumImportance(int n, int[][] roads) {
    int[] degree = new int[n];

    for (int[] road : roads) {
      degree[road[0]]++;
      degree[road[1]]++;
    }

    Integer[] cities = new Integer[n];
    for (int i = 0; i < n; i++)
      cities[i] = i;
    Arrays.sort(cities, new Comparator<Integer>() {
      public int compare(Integer a, Integer b) {
        return Integer.compare(degree[b], degree[a]);
      }
    });

    long totalImportance = 0;
    for (int i = 0; i < n; i++)
      totalImportance += (long) (n - i) * degree[cities[i]];
    return totalImportance;
  }
}