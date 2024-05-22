class Solution {
  int R, C;

  public void solve(char[][] board) {
    R = board.length;
    C = board[0].length;

    for (int i = 0; i < R; i++) {
      capture(board, i, 0);
      capture(board, i, C - 1);
    }

    for (int j = 0; j < C; j++) {
      capture(board, 0, j);
      capture(board, R - 1, j);
    }

    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C; j++) {
        if (board[i][j] == 'O') {
          board[i][j] = 'X';
        } else if (board[i][j] == 'A') {
          board[i][j] = 'O';
        }
      }
    }
  }

  void capture(char[][] board, int r, int c) {
    if (r < 0 || r >= R || c < 0 || c >= C || board[r][c] != 'O') {
      return;
    }

    board[r][c] = 'A';
    capture(board, r + 1, c);
    capture(board, r - 1, c);
    capture(board, r, c + 1);
    capture(board, r, c - 1);
  }
}