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
   int ans = 0;
public:
   int pseudoPalindromicPaths(TreeNode* root) {
      if (!root) return 0;
      dfs(root, 0);
      return ans;
   }
   void dfs(TreeNode* root, int mask) {
      if (!root) return;
      mask ^= (1 << root->val);
      if (!root->left && !root->right)
         if ((mask & (mask - 1)) == 0) ans++;
      dfs(root->left, mask);
      dfs(root->right, mask);
   }
};
