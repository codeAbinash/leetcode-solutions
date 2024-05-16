import java.util.List;
import java.util.ArrayList;

class Solution {
  public List<List<Integer>> levelOrder(TreeNode root) {
    List<List<Integer>> levels = new ArrayList<>();
    if (root == null)
      return levels;
    List<TreeNode> level = new ArrayList<>();
    level.add(root);
    while (!level.isEmpty()) {
      List<TreeNode> nextLevel = new ArrayList<>();
      List<Integer> values = new ArrayList<>();
      for (TreeNode node : level) {
        values.add(node.val);
        if (node.left != null)
          nextLevel.add(node.left);
        if (node.right != null)
          nextLevel.add(node.right);
      }
      levels.add(values);
      level = nextLevel;
    }
    return levels;
  }
}