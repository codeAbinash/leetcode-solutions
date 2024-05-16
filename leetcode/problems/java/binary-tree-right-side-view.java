import java.util.List;
import java.util.ArrayList;

class Solution {
  public List<Integer> rightSideView(TreeNode root) {
    List<Integer> rightSide = new ArrayList<>();
    rightView(root, 0, rightSide);
    return rightSide;
  }

  void rightView(TreeNode root, int level, List<Integer> rightSide) {
    if (root == null)
      return;
    if (level == rightSide.size())
      rightSide.add(root.val);
    rightView(root.right, level + 1, rightSide);
    rightView(root.left, level + 1, rightSide);
  }
}