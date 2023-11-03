// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "algorithm"

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
   int totalTilt = 0;
   int valSum(TreeNode* root) {
      if (!root) return 0;
      int leftSum = valSum(root->left);
      int rightSum = valSum(root->right);
      int tilt = abs(leftSum - rightSum);
      totalTilt += tilt;
      return leftSum + rightSum + root->val;
   }

  public:
   int findTilt(TreeNode* root) {
      totalTilt = 0;
      valSum(root);
      return totalTilt;
   }
};

// Better Solution
class Solution {
  public:
   void sumUp(TreeNode* root) {
      if (root->left) sumUp(root->left);
      if (root->right) sumUp(root->right);
      root->val += (root->left ? root->left->val : 0) + (root->right ? root->right->val : 0);
   }
   int tilt(TreeNode* root) {
      if (!root) return 0;
      int left = root->left ? root->left->val : 0;
      int right = root->right ? root->right->val : 0;
      return abs(left - right) + tilt(root->left) + tilt(root->right);
   }
   int findTilt(TreeNode* root) {
      if (!root) return 0;
      sumUp(root);
      return tilt(root);
   }
};

// Another Solution
class Solution {
  public:
   int tilts;
   int findTilt(TreeNode* root) {
      traverse(root);
      return tilts;
   }
   int traverse(TreeNode* node) {
      if (node == NULL) return 0;
      int left = traverse(node->left);
      int right = traverse(node->right);
      tilts += abs(left - right);
      return left + right + node->val;
   }
};
