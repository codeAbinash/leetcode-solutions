// by @codeAbinash
// Time : O(n)


struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


// Iterative Solution
// Space : O(1)
class Solution {
public:
   TreeNode* insertIntoBST(TreeNode* root, int val) {
      if (!root) return new TreeNode(val);
      TreeNode* curr = root;
      TreeNode* prev = curr;
      TreeNode* newNode = new TreeNode(val);
      while (curr) {
         prev = curr;
         if (prev->val > val) curr = curr->left;
         else  curr = curr->right;
      }

      if (val < prev->val) prev->left = newNode;
      else prev->right = newNode;
      return root;
   }
};


// Recursive Solution
// Space : O(n)
class Solution {
public:
   TreeNode* insertIntoBST(TreeNode* root, int val) {
      if (!root) return new TreeNode(val);
      if (root->val > val) {
         root->left = insertIntoBST(root->left, val);
         return root;
      }
      root->right = insertIntoBST(root->right, val);
      return root;
   }
};
