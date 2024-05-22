class TrieNode {
  TrieNode[] children = new TrieNode[26];
  boolean isWord;
}

class WordDictionary {

  TrieNode root;

  public WordDictionary() {
    root = new TrieNode();
  }

  public void addWord(String word) {
    TrieNode node = root;
    for (char c : word.toCharArray()) {
      if (node.children[c - 'a'] == null) {
        node.children[c - 'a'] = new TrieNode();
      }
      node = node.children[c - 'a'];
    }
    node.isWord = true;
  }

  public boolean search(String word) {
    return dfs(root, word, 0);
  }

  boolean dfs(TrieNode root, String word, int index) {
    for (int i = index; i < word.length(); i++) {
      char c = word.charAt(i);
      if (c == '.') {
        for (TrieNode child : root.children) {
          if (child != null && dfs(child, word, i + 1)) {
            return true;
          }
        }
        return false;
      } else {
        if (root.children[c - 'a'] == null) {
          return false;
        }
        root = root.children[c - 'a'];
      }
    }
    return root.isWord;
  }

}
