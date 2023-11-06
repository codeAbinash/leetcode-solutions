// by @codeAbinash
// Time : O(n)
// Space : O(n)

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
  public:
   bool isSubtree(TreeNode *root, TreeNode *subRoot) {
      if (!root) return false;
      if (isSameTree(root, subRoot)) return true;
      return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
   }

   bool isSameTree(TreeNode *root, TreeNode *subRoot) {
      if (!root && !subRoot) return true;
      if (!root || !subRoot) return false;
      if (root->val != subRoot->val) return false;
      return isSameTree(root->left, subRoot->left) && isSameTree(root->right, subRoot->right);
   }
};
