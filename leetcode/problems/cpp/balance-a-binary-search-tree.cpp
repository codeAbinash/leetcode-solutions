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
   vector<TreeNode*> sorted;
   void inorder(TreeNode* root) {
      if (!root) return;
      inorder(root->left);
      sorted.push_back(root);
      inorder(root->right);
   }
   TreeNode* helper(int start, int end) {
      if (start > end) return nullptr;
      int mid = (start + end) / 2;
      auto node = sorted[mid];
      node->left = helper(start, mid - 1);
      node->right = helper(mid + 1, end);
      return node;
   }
public:
   TreeNode* balanceBST(TreeNode* root) {
      inorder(root);
      return helper(0, sorted.size() - 1);
   }
};
