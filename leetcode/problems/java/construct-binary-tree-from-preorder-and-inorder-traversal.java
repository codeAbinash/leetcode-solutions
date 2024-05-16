import java.util.HashMap;

class Solution {
  int pi = 0;

  public TreeNode buildTree(int[] preorder, int[] inorder) {
    HashMap<Integer, Integer> inorderMap = new HashMap<>();
    for (int i = 0; i < inorder.length; i++)
      inorderMap.put(inorder[i], i);
    return solve(preorder, inorderMap, 0, inorder.length);
  }

  TreeNode solve(int[] preorder, HashMap<Integer, Integer> inorderMap, int left, int right) {
    if (left == right)
      return null;
    TreeNode root = new TreeNode(preorder[pi++]);

    int inorderIndex = inorderMap.get(root.val);
    root.left = solve(preorder, inorderMap, left, inorderIndex);
    root.right = solve(preorder, inorderMap, inorderIndex + 1, right);

    return root;

  }
}