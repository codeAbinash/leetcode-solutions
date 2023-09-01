// by @codeAbinash
// Time : O(log n)
// Space : O(1)

#include "stddef.h"

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Recursive Solution
class Solution {
public:
   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      if (!root) return nullptr;
      if (root->val > p->val && root->val > q->val)
         return lowestCommonAncestor(root->left, p, q);
      else if (root->val < p->val && root->val < q->val)
         return lowestCommonAncestor(root->right, p, q);
      else
         return root;
   }
};


// Iterative Solution
class Solution {
public:
   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      TreeNode* curr = root;
      while (curr) {
         if (curr->val > p->val && curr->val > q->val)
            curr = curr->left;
         else if (curr->val < p->val && curr->val < q->val)
            curr = curr->right;
         else
            return curr;
      }
      return nullptr;
   }
};
