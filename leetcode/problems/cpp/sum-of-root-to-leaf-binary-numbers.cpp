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
public:
   int sumRootToLeaf(TreeNode* root) {
      return dfs(root, 0);
   }
   int dfs(TreeNode* root, int sum) {
      if (!root) return 0;
      sum = sum << 1 | root->val;
      if (!root->left && !root->right) return sum;
      return dfs(root->left, sum) + dfs(root->right, sum);
   }
};
