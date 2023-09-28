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
   int depth = 0, num;
public:
   int findBottomLeftValue(TreeNode* root) {
      if (!root) return 0;
      dfs(root, 1);
      return num;
   }
   void dfs(TreeNode* root, int d) {
      if (!root) return;
      if (d > depth) {
         depth = d;
         num = root->val;
      }
      dfs(root->left, d + 1);
      dfs(root->right, d + 1);
   }
};
