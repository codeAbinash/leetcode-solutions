// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "algorithm"
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
   int height(TreeNode *root) {
      if (root == nullptr) return 0;

      int left = height(root->left);
      if (left == -1) return -1;

      int right = height(root->right);
      if (right == -1) return -1;

      if (abs(left - right) > 1) return -1;

      return max(left, right) + 1;
   }

  public:
   bool isBalanced(TreeNode *root) {
      return height(root) != -1;
   }
};

// Another Solution

class Solution {
   int maxDepth(TreeNode *root) {
      if (root == nullptr)
         return 0;
      return 1 + max(maxDepth(root->left), maxDepth(root->right));
   }

  public:
   bool isBalanced(TreeNode *root) {
      if (root == nullptr)
         return true;
      return abs(maxDepth(root->left) - maxDepth(root->right)) <= 1 &&
             isBalanced(root->left) && isBalanced(root->right);
   }
};
