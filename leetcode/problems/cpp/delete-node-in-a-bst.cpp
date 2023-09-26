// by @codeAbinash
// Time : O(n)
// Space : O(n)

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
   TreeNode* deleteNode(TreeNode* root, int key) {
      if (root == nullptr) return root;
      if (root->val == key) {
         if (root->left == nullptr) return root->right;
         if (root->right == nullptr) return root->left;
         TreeNode* temp = root->right;
         while (temp->left != nullptr) temp = temp->left;
         temp->left = root->left;
         return root->right;
      }
      if (root->val > key) root->left = deleteNode(root->left, key);
      else root->right = deleteNode(root->right, key);
      return root;
   }
};
