// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "algorithm"
using namespace std;

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
   void swapNodes(TreeNode* root) {
      if (!root) return;
      swap(root->left, root->right);
      swapNodes(root->left);
      swapNodes(root->right);
   }
public:
   TreeNode* invertTree(TreeNode* root) {
      return swapNodes(root), root;
   }
};
