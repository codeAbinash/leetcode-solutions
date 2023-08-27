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
   bool isSameTreeSymmetric(TreeNode* p, TreeNode* q) {
      if (!q && !p) return true;
      if (!q || !p) return false;
      if (p->val == q->val)
         return (isSameTreeSymmetric(p->left, q->right) && isSameTreeSymmetric(p->right, q->left));
      return false;
   }
   bool isSymmetric(TreeNode* root) {
      return isSameTreeSymmetric(root->left, root->right);
   }
};