import java.util.LinkedList;
import java.util.Queue;

class Solution {
  int r, c;

  public int orangesRotting(int[][] grid) {
    r = grid.length;
    c = grid[0].length;
    int time = 0, fresh = 0;
    Queue<int[]> queue = new LinkedList<>();
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (grid[i][j] == 2) {
          queue.offer(new int[] { i, j });
        } else if (grid[i][j] == 1) {
          fresh++;
        }
      }
    }

    int dirs[][] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
    while (!queue.isEmpty() && fresh > 0) {
      for (int i = queue.size(); i > 0; i--) {
        int point[] = queue.poll();
        int r = point[0], c = point[1];

        for (int dir[] : dirs) {
          int newR = r + dir[0], newC = c + dir[1];
          if (newR < 0 || newC < 0 || newR >= this.r || newC >= this.c || grid[newR][newC] != 1) {
            continue;
          }
          grid[newR][newC] = 2;
          queue.offer(new int[] { newR, newC });
          fresh--;
        }
      }
      time++;
    }
    return fresh == 0 ? time : -1;
  }
}