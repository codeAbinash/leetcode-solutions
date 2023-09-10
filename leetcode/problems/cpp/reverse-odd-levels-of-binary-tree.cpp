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
   void reverse(TreeNode* left, TreeNode* right, int level) {
      if (!left || !right) return;
      if (level % 2 == 0) swap(left->val, right->val);
      reverse(left->left, right->right, level + 1);
      reverse(left->right, right->left, level + 1);
   }
public:
   TreeNode* reverseOddLevels(TreeNode* root) {
      reverse(root->left, root->right, 0);
      return root;
   }
};
