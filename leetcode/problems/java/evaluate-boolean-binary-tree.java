class Solution {
  public boolean evaluateTree(TreeNode root) {
    if (root == null)
      return false;
    boolean left = evaluateTree(root.left);
    if (left)
      if (root.val == 2)
        return true;
    if (!left)
      if (root.val == 3)
        return false;
    if (root.val == 2)
      return left || evaluateTree(root.right);
    if (root.val == 3)
      return left && evaluateTree(root.right);
    if (root.val == 0)
      return false;
    return true;
  }
}