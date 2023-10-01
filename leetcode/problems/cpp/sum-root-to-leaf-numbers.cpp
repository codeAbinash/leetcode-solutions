// by @codeAbinash
// Time : O(n)
// Space : O(n)

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
  void dfs(TreeNode* root, int num) {
    if (!root) return;
    num = num * 10 + root->val;
    if (!root->left && !root->right)
      sum += num;
    dfs(root->left, num);
    dfs(root->right, num);
  }
public:
  int sum = 0;
  int sumNumbers(TreeNode* root) {
    if (!root) return 0;
    dfs(root, 0);
    return sum;
  }
};
