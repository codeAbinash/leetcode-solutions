// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "iostream"
#include "vector"
using namespace std;

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      if (!root) return nullptr;

      TreeNode* left = lowestCommonAncestor(root->left, p, q);
      TreeNode* right = lowestCommonAncestor(root->right, p, q);

      if (left && right) return root;
      if (root == p || root == q) return root;

      return left ? left : right;
   }
};
