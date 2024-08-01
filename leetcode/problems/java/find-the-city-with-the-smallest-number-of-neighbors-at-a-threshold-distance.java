import java.util.*;

class Solution {
  public int findTheCity(int n, int[][] edges, int distanceThreshold) {
    int[][] dist = new int[n][n];
    for (int i = 0; i < n; i++) {
      Arrays.fill(dist[i], Integer.MAX_VALUE);
      dist[i][i] = 0;
    }
    for (int[] edge : edges) {
      dist[edge[0]][edge[1]] = edge[2];
      dist[edge[1]][edge[0]] = edge[2];
    }
    for (int k = 0; k < n; k++) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (dist[i][k] != Integer.MAX_VALUE && dist[k][j] != Integer.MAX_VALUE) {
            dist[i][j] = Math.min(dist[i][j], dist[i][k] + dist[k][j]);
          }
        }
      }
    }
    int min = Integer.MAX_VALUE;
    int res = -1;
    for (int i = 0; i < n; i++) {
      int count = 0;
      for (int j = 0; j < n; j++) {
        if (dist[i][j] <= distanceThreshold) {
          count++;
        }
      }
      if (count <= min) {
        min = count;
        res = i;
      }
    }
    return res;
  }
}