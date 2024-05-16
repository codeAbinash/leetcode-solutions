class Solution {
  int ans = 0;

  public int diameterOfBinaryTree(TreeNode root) {
    dfs(root);
    return ans;
  }

  int dfs(TreeNode root) {
    if (root == null)
      return 0;
    int left = dfs(root.left);
    int right = dfs(root.right);
    ans = Math.max(ans, left + right);
    return 1 + Math.max(left, right);
  }
}