class Solution {
  int n, ans = 0;

  public int kthSmallest(TreeNode root, int k) {
    n = k;
    dfs(root);
    return ans;
  }

  void dfs(TreeNode root) {
    if (root == null || n == 0)
      return;
    dfs(root.left);
    if (n == 1) {
      ans = root.val;
      n--;
      return;
    } else {
      n--;
    }
    dfs(root.right);
  }
}