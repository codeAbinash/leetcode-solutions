import java.util.ArrayList;
import java.util.List;

class TrieNode {
  TrieNode[] children = new TrieNode[26];
  String word;

  void addWord(String word) {
    TrieNode node = this;
    for (char c : word.toCharArray()) {
      if (node.children[c - 'a'] == null) {
        node.children[c - 'a'] = new TrieNode();
      }
      node = node.children[c - 'a'];
    }
    node.word = word;
  }
}

class Solution {
  public List<String> findWords(char[][] board, String[] words) {
    TrieNode root = new TrieNode();
    for (String word : words) {
      root.addWord(word);
    }
    List<String> res = new ArrayList<>();
    for (int i = 0; i < board.length; i++) {
      for (int j = 0; j < board[0].length; j++) {
        dfs(board, i, j, root, res);
      }
    }
    return res;
  }

  void dfs(char[][] board, int i, int j, TrieNode node, List<String> res) {
    if (i < 0 || i >= board.length || j < 0 || j >= board[0].length) {
      return;
    }
    char c = board[i][j];
    if (c == '#' || node.children[c - 'a'] == null) {
      return;
    }
    node = node.children[c - 'a'];
    if (node.word != null) {
      res.add(node.word);
      node.word = null;
    }
    board[i][j] = '#';
    dfs(board, i + 1, j, node, res);
    dfs(board, i - 1, j, node, res);
    dfs(board, i, j + 1, node, res);
    dfs(board, i, j - 1, node, res);
    board[i][j] = c;
  }
}