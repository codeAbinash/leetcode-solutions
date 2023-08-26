// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
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
   vector<int> result;
   void inorder(TreeNode* node) {
      if (!node) return;
      inorder(node->left);
      result.push_back(node->val);
      inorder(node->right);
   }
public:
   vector<int> inorderTraversal(TreeNode* root) {
      inorder(root);
      return result;
   }
};