class Solution {
  public int maxPathSum(TreeNode root) {
    var result = new int[] { Integer.MIN_VALUE };
    maxPathSum(root, result);
    return result[0];
  }

  int maxPathSum(TreeNode root, int[] result) {
    if (root == null) {
      return 0;
    }
    int left = Math.max(maxPathSum(root.left, result), 0);
    int right = Math.max(maxPathSum(root.right, result), 0);
    result[0] = Math.max(left + right + root.val, result[0]);
    return Math.max(left, right) + root.val;
  }
}