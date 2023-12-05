// by @codeAbinash
// Time : O(n)
// Space : O(n)

class Node {
  val: number;
  children: Node[];
  constructor(val?: number, children?: Node[]) {
    this.val = val === undefined ? 0 : val;
    this.children = children === undefined ? [] : children;
  }
}

function maxDepth(root: Node | null): number {
  if (!root) return 0;
  let max = 0;
  for (let child of root.children) max = Math.max(max, maxDepth(child));
  return max + 1;
}
