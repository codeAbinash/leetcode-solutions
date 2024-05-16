class Solution {
  public boolean isBalanced(TreeNode root) {
    return dfs(root) != -1;
  }

  int dfs(TreeNode root) {
    if (root == null)
      return 0;
    int left = dfs(root.left);
    if (left == -1)
      return -1;
    int right = dfs(root.right);
    if (right == -1)
      return -1;
    if (Math.abs(left - right) > 1)
      return -1;
    return 1 + Math.max(left, right);
  }
}