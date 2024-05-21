import java.util.*;

class Solution {
  public boolean exist(char[][] board, String word) {
    HashSet<List<Integer>> visited = new HashSet<>();
    for (int i = 0; i < board.length; i++) {
      for (int j = 0; j < board[0].length; j++) {
        if (dfs(board, word, visited, i, j, 0)) {
          return true;
        }
      }
    }
    return false;
  }

  private boolean dfs(char[][] board, String word, HashSet<List<Integer>> visited, int i, int j, int k) {
    if (k == word.length()) {
      return true;
    }
    if (i < 0 || i >= board.length || j < 0 || j >= board[0].length || visited.contains(Arrays.asList(i, j))) {
      return false;
    }
    if (board[i][j] != word.charAt(k)) {
      return false;
    }
    visited.add(Arrays.asList(i, j));
    if (dfs(board, word, visited, i + 1, j, k + 1) || dfs(board, word, visited, i - 1, j, k + 1)
        || dfs(board, word, visited, i, j + 1, k + 1) || dfs(board, word, visited, i, j - 1, k + 1)) {
      return true;
    }
    visited.remove(Arrays.asList(i, j));
    return false;
  }

}

class Solution2 {
  public boolean exist(char[][] board, String word) {
    int n = board.length;
    int m = board[0].length;
    boolean[][] visited = new boolean[n][m];
    char[] wordChar = word.toCharArray();

    if (wordChar.length > n * m)
      return false;

    int counts[] = new int[256];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        counts[board[i][j]]++;
      }
    }

    int len = wordChar.length;
    for (int i = 0; i < len / 2; i++) {
      if (counts[wordChar[i]] > counts[wordChar[len - 1 - i]]) {
        for (int j = 0; j < len / 2; j++) {
          char temp = wordChar[j];
          wordChar[j] = wordChar[len - 1 - j];
          wordChar[len - 1 - j] = temp;
        }
        break;
      }
    }

    for (char c : wordChar) {
      if (--counts[c] < 0)
        return false;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (visit(board, wordChar, 0, i, j, n, m, visited))
          return true;
      }
    }
    return false;
  }

  private boolean visit(char[][] board, char[] word, int start, int x, int y,
      int n, int m, boolean[][] visited) {
    if (start == word.length)
      return true;
    if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y])
      return false;
    if (word[start] != board[x][y])
      return false;
    visited[x][y] = true;
    boolean found = visit(board, word, start + 1, x + 1, y, n, m, visited)
        || visit(board, word, start + 1, x - 1, y, n, m, visited)
        || visit(board, word, start + 1, x, y + 1, n, m, visited)
        || visit(board, word, start + 1, x, y - 1, n, m, visited);
    visited[x][y] = false;
    return found;
  }
}
