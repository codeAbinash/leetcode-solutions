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
   int sum = 0;
   void dfs(TreeNode* root) {
      if (!root) return;
      if (root->val % 2 == 0) {
         dfs2(root->left, 2);
         dfs2(root->right, 2);
      }
      dfs(root->left);
      dfs(root->right);
   }

   void dfs2(TreeNode *root, int depth){
      if(!root) return;
      depth--;
      if(depth == 0) sum += root->val;
      dfs2(root->left , depth);
      dfs2(root->right , depth);
   }

public:
   int sumEvenGrandparent(TreeNode* root) {
      dfs(root);
      return sum;
   }
};
