// by @codeAbinash
// Time : O(n)
// Space : O(n)

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
   bool isSymmetric(TreeNode *p, TreeNode *q) {
      if (p == nullptr && q == nullptr) return true;
      if (p == nullptr || q == nullptr) return false;
      return p->val == q->val && isSymmetric(p->left, q->right) && isSymmetric(p->right, q->left);
   }

  public:
   bool isSymmetric(TreeNode *root) {
      return isSymmetric(root, root);
   }
};
