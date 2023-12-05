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

// Using BFS
function averageOfLevels(root: TreeNode | null): number[] {
  if (!root) return [];
  const q: TreeNode[] = [root];
  const ans: number[] = [];

  while (q.length) {
    const len = q.length;
    let sum = 0;
    for (let i = 0; i < len; i++) {
      const node = q.shift() as TreeNode;
      sum += node.val;
      if (node.left) q.push(node.left);
      if (node.right) q.push(node.right);
    }
    ans.push(sum / len);
  }
  return ans;
}

// Using BFS, better version
function averageOfLevels(root: TreeNode | null): number[] {
  if (root === null) return [];
  const ans: number[] = [];
  let nodes = [root];
  let i = 0;
  while (i < nodes.length) {
    let sum = 0;
    const size = nodes.length - i;
    for (let j = nodes.length; i < j; i++) {
      const node = nodes[i];
      sum += node.val;
      node.left && nodes.push(node.left);
      node.right && nodes.push(node.right);
    }
    ans.push(sum / size);
  }
  return ans;
}

// Using DFS
function averageOfLevels(root: TreeNode | null): number[] {
  const ans: number[] = [];
  const count: number[] = [];
  dfs(root, 0);
  for (let i = 0; i < ans.length; i++) {
    ans[i] = ans[i] / count[i];
  }
  function dfs(root: TreeNode | null, level: number) {
    if (!root) return;
    if (level < ans.length) {
      ans[level] += root.val;
      count[level]++;
    } else {
      ans.push(root.val);
      count.push(1);
    }
    dfs(root.left, level + 1);
    dfs(root.right, level + 1);
  }
  return ans;
}
