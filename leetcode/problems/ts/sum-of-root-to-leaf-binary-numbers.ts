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

function sumRootToLeaf(root: TreeNode | null): number {
  if (!root) return 0;
  let sum = 0;
  const dfs = (root: TreeNode, prev: number) => {
    const curr = (prev << 1) + root.val;
    if (!root.left && !root.right) {
      sum += curr;
      return;
    }
    root?.left && dfs(root.left, curr);
    root?.right && dfs(root.right, curr);
  };
  dfs(root, 0);
  return sum;
}
