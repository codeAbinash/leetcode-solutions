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
   void postorder(TreeNode* node) {
      if (!node) return;
      postorder(node->left);
      postorder(node->right);
      result.push_back(node->val);
   }
public:
   vector<int> postorderTraversal(TreeNode* root) {
      postorder(root);
      return result;
   }
};