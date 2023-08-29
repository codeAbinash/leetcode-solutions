// by @codeAbinash
// Time : O(log n * log n)
// Space : O(1)

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
   int countNodes(TreeNode* root) {
      if (!root) return 0;
      TreeNode* left = root, * right = root;
      int height = 0;

      while (right) {
         left = left->left;
         right = right->right;
         height++;
      }

      if (!left) return (1 << height) - 1;
      return 1 + countNodes(root->left) + countNodes(root->right);
   }
};