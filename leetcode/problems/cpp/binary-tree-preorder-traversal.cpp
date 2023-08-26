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
   void preorder(TreeNode* node) {
      if (!node) return;
      result.push_back(node->val);
      preorder(node->left);
      preorder(node->right);
   }
public:
   vector<int> preorderTraversal(TreeNode* root) {
      preorder(root);
      return result;
   }
};