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

function findTarget(root: TreeNode | null, k: number): boolean {
  const set = new Set<number>();
  function traverse(node: TreeNode | null): boolean {
    if (!node) return false;
    if (set.has(k - node.val)) return true;
    set.add(node.val);
    return traverse(node.left) || traverse(node.right);
  }
  return traverse(root);
}
