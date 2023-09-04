// by @codeAbinash
// Time : O(1)
// Space : O(1)

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
   bool checkTree(TreeNode* root) {
      return root->val == root->left->val + root->right->val;
   }
};
