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
   int maxStep = 0;
public:
   int longestZigZag(TreeNode* root) {
      dfs(root, true, 0);
      dfs(root, false, 0);
      return maxStep;
   }
   void dfs(TreeNode* root, bool isLeft, int step) {
      if (!root) return;
      maxStep = max(maxStep, step);
      if (isLeft) {
         dfs(root->left, false, step + 1);
         dfs(root->right, true, 1);
      } else {
         dfs(root->right, true, step + 1);
         dfs(root->left, false, 1);
      }
   }
};
