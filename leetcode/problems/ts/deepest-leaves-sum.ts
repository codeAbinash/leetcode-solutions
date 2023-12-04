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

function height(root: TreeNode | null): number {
  if (!root) return 0;
  return 1 + Math.max(height(root.left), height(root.right));
}

function sumKLevel(root: TreeNode | null, k: number): number {
  if (!root) return 0;
  if (k === 1) return root.val;
  return sumKLevel(root.left, k - 1) + sumKLevel(root.right, k - 1);
}

function deepestLeavesSum(root: TreeNode | null): number {
  const h = height(root);
  return sumKLevel(root, h);
}
