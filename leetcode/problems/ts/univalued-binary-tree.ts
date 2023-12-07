// by @codeAbinash
// Time : O(n)
// Space : O(n)

class TreeNode {
  val: number;
  left: TreeNode | null;
  right: TreeNode | null;
  constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
    this.val = val === undefined ? 0 : val;
    this.left = left === undefined ? null : left;
    this.right = right === undefined ? null : right;
  }
}

// Check if the root and it's left and right child have same value for each node
function isUnivalTree(root: TreeNode | null): boolean {
  if (!root) return true;
  const leftValue = root.left?.val ?? root.val;
  const rightValue = root.right?.val ?? root.val;
  if (root.val !== leftValue || root.val !== rightValue) return false;
  return isUnivalTree(root.left) && isUnivalTree(root.right);
}
