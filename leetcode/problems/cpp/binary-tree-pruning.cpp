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
   TreeNode* pruneTree(TreeNode* root) {
      if (!root) return root;
      root->left = pruneTree(root->left);
      root->right = pruneTree(root->right);
      if (root->left || root->right) return root;
      if (root->val == 0) return nullptr;
      return root;
   }
};
