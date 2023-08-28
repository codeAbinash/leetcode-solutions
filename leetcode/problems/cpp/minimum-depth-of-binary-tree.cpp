// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "algorithm"
#include "climits"

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
   int minD = INT_MAX;
   void calcDepth(TreeNode* node, int depth) {
      if (!node) return;

      if (node->left == node->right)
         // Possible only if they both are NULL
         if (depth < minD) minD = depth;

      if (depth < minD)
         calcDepth(node->left, depth + 1),
         calcDepth(node->right, depth + 1);
   }
   int minDepth(TreeNode* root) {
      if (!root) return 0;
      calcDepth(root, 1);
      return minD;
   }
};