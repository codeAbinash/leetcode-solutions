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
   int n, ans = 0;
   void dfs(TreeNode* root) {
      if (!root || n == 0) return;
      dfs(root->left);
      if (n == 1) {
         ans = root->val;
         n--;
         return;
      } else {
         n--;
      }
      dfs(root->right);
   }
public:

   int kthSmallest(TreeNode* root, int k) {
      n = k;
      dfs(root);
      return ans;
   }
};
