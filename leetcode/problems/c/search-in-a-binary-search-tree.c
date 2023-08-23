// by @codeAbinash
// Time : O(log n)
// Space : O(1)

struct TreeNode {
   int val;
   struct TreeNode* left;
   struct TreeNode* right;
};

struct TreeNode* searchBST(struct TreeNode* root, int val) {
   if (!root) return root;
   if (root->val == val) return root;
   if (root->val < val) return searchBST(root->right, val);
   return searchBST(root->left, val);
}
