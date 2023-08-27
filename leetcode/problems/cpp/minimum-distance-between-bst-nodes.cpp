// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "climits"
int min(int a, int b) { return a > b ? b : a; }

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


class Solution {
   int minDiff = INT_MAX;
   int prev = -1;
   void inorder(TreeNode* root) {
      if (!root) return;
      inorder(root->left);
      if (prev != -1) minDiff = min(minDiff, root->val - prev);
      prev = root->val;
      inorder(root->right);
   }
public:
   int minDiffInBST(TreeNode* root) {
      inorder(root);
      return minDiff;
   }
};