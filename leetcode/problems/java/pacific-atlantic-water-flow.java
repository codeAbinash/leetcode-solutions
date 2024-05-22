import java.util.ArrayList;
import java.util.List;

class Solution {
  int R, C;

  public List<List<Integer>> pacificAtlantic(int[][] heights) {
    List<List<Integer>> result = new ArrayList<>();
    if (heights == null || heights.length == 0) {
      return result;
    }

    R = heights.length;
    C = heights[0].length;

    boolean[][] pacific = new boolean[R][C];
    boolean[][] atlantic = new boolean[R][C];

    for (int i = 0; i < R; i++) {
      dfs(heights, pacific, i, 0, 0);
      dfs(heights, atlantic, i, C - 1, 0);
    }

    for (int i = 0; i < C; i++) {
      dfs(heights, pacific, 0, i, 0);
      dfs(heights, atlantic, R - 1, i, 0);
    }

    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C; j++) {
        if (pacific[i][j] && atlantic[i][j]) {
          List<Integer> cell = new ArrayList<>();
          cell.add(i);
          cell.add(j);
          result.add(cell);
        }
      }
    }

    return result;
  }

  private void dfs(int[][] heights, boolean[][] visited, int i, int j, int prevHeight) {
    if (i < 0 || j < 0 || i >= R || j >= C || visited[i][j] || heights[i][j] < prevHeight) {
      return;
    }

    visited[i][j] = true;
    dfs(heights, visited, i + 1, j, heights[i][j]);
    dfs(heights, visited, i - 1, j, heights[i][j]);
    dfs(heights, visited, i, j + 1, heights[i][j]);
    dfs(heights, visited, i, j - 1, heights[i][j]);
  }

}