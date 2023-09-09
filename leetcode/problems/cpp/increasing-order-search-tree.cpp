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
   TreeNode* increasingBST(TreeNode* root, TreeNode* tail = nullptr) {
      if (!root) return tail;
      TreeNode* res = increasingBST(root->left, root);
      root->left = nullptr;
      root->right = increasingBST(root->right, tail);
      return res;
   }
};
