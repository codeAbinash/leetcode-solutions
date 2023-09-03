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


// Little bit optimized
class Solution {
public:
   bool evaluateTree(TreeNode* root) {
      if (!root) return true;
      bool leftResult = evaluateTree(root->left);
      if (leftResult == true) if (root->val == 2) return true; // Need not to traverse the right part
      if (leftResult == false) if (root->val == 3) return false; // Need not to traverse the right part
      if (root->val == 2) return leftResult || evaluateTree(root->right);
      if (root->val == 3) return leftResult && evaluateTree(root->right);
      if (root->val == 0) return false;
      return true;
   }
};
