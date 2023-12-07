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

function getMinimumDifference(root: TreeNode | null): number {
  const dfs = (node: TreeNode | null) => {
    if (!node) return;
    dfs(node.left);
    ans = Math.min(ans, Math.abs(node.val - prev));
    prev = node.val;
    dfs(node.right);
  };

  let ans = Number.MAX_VALUE;
  let prev = Number.MAX_VALUE;
  dfs(root);

  return ans;
}
