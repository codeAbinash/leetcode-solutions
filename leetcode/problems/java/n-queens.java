import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;

class Solution {
  private List<List<String>> res = new ArrayList<>();
  private HashSet<Integer> col = new HashSet<>();
  private HashSet<Integer> diag1 = new HashSet<>();
  private HashSet<Integer> diag2 = new HashSet<>();

  public List<List<String>> solveNQueens(int n) {
    char[][] board = new char[n][n];
    for (char[] row : board) {
      Arrays.fill(row, '.');
    }
    backtrack(board, 0);
    return res;
  }

  private void backtrack(char[][] board, int row) {
    if (row == board.length) {
      List<String> list = new ArrayList<>();
      for (char[] r : board) {
        list.add(new String(r));
      }
      res.add(list);
      return;
    }
    for (int c = 0; c < board[row].length; c++) {
      if (col.contains(c) || diag1.contains(row + c) || diag2.contains(row - c)) {
        continue;
      }
      col.add(c);
      diag1.add(row + c);
      diag2.add(row - c);
      board[row][c] = 'Q';
      backtrack(board, row + 1);
      board[row][c] = '.';
      col.remove(c);
      diag1.remove(row + c);
      diag2.remove(row - c);
    }
  }
}