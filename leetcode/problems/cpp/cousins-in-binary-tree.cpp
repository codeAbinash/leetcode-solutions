// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
#include "vector"
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right)
       : val(x), left(left), right(right) {}
};

class Solution {
  public:
   bool isCousins(TreeNode *root, int x, int y) {
      TreeNode *p1 = NULL;
      TreeNode *p2 = NULL;
      queue<TreeNode *> q;

      if (!root) return 0;
      q.push(root);

      while (!q.empty()) {
         int levelSize = q.size();
         while (levelSize-- > 0) {
            TreeNode *curr = q.front();
            q.pop();
            if (curr->left) {
               if (curr->left->val == x) p1 = curr;
               if (curr->left->val == y) p2 = curr;
               q.push(curr->left);
            }
            if (curr->right) {
               if (curr->right->val == x) p1 = curr;
               if (curr->right->val == y) p2 = curr;
               q.push(curr->right);
            }
            if (p1 != NULL && p2 != NULL && p1 != p2) return 1;
         }
         p1 = NULL;
         p2 = NULL;
      }
      return 0;
   }
};
