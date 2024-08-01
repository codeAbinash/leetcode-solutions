import java.util.*;

class Solution {
  public List<TreeNode> delNodes(TreeNode root, int[] to_delete) {
    List<TreeNode> result = new ArrayList<>();
    Set<Integer> toDelete = new HashSet<>();
    for (int i : to_delete) {
      toDelete.add(i);
    }
    deleteNodes(root, toDelete, result, true);
    return result;
  }

  private TreeNode deleteNodes(TreeNode node, Set<Integer> toDelete, List<TreeNode> result, boolean isRoot) {
    if (node == null) {
      return null;
    }
    boolean deleted = toDelete.contains(node.val);
    if (isRoot && !deleted) {
      result.add(node);
    }
    node.left = deleteNodes(node.left, toDelete, result, deleted);
    node.right = deleteNodes(node.right, toDelete, result, deleted);
    return deleted ? null : node;
  }

}