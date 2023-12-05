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

function dfs(root: TreeNode | null, ans: number[]) {
  if (!root) return;
  ans.push(root.val);
  dfs(root.left, ans);
  dfs(root.right, ans);
}
function preorderTraversal(root: TreeNode | null): number[] {
  const ans: number[] = [];
  dfs(root, ans);
  return ans;
}
