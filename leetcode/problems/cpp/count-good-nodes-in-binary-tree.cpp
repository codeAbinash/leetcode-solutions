// by @codeAbinash

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
   int count = 0;
public:
   int goodNodes(TreeNode* root) {
      dfs(root, root->val);
      return count;
   }
   void dfs(TreeNode* node, int currMax) {
      if (!node) return;
      if (node->val >= currMax) {
         count++;
         currMax = node->val;
      }
      dfs(node->left, currMax);
      dfs(node->right, currMax);
   }
};
