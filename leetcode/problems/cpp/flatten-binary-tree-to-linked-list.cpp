// by @codeAbinash
// Time : O(n)
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
   void flatten(TreeNode* root) {
      TreeNode* curr = root;
      while (curr) {
         if (curr->left) {
            TreeNode* prev = curr->left;
            while (prev->right)
               prev = prev->right;
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = nullptr;
         }
         curr = curr->right;
      }
   }
};
