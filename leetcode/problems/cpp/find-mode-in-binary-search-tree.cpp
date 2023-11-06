// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
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
   int val = 0, count = 0, maxCount = 0;
   vector<int> modes;

   void inorder(TreeNode *node) {
      if (!node) return;
      inorder(node->left);
      count = (node->val == val) ? count + 1 : 1;
      if (count == maxCount)
         modes.push_back(node->val);
      else if (count > maxCount) {
         maxCount = count;
         modes = {node->val};
      }
      val = node->val;
      inorder(node->right);
   }

  public:
   vector<int> findMode(TreeNode *root) {
      inorder(root);
      return modes;
   }
};
