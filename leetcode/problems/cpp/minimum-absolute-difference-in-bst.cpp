// by @codeAbinash
// Time : O(n)
// Space : O(n)
#include "climits"
#include "algorithm"

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


class Solution {
  int ans = INT_MAX;
  TreeNode* prev = nullptr;
  void dfs(TreeNode* root) {
    if (!root) return;
    dfs(root->left);
    if (prev) ans = std::min(ans, root->val - prev->val);
    prev = root;
    dfs(root->right);
  }
public:
  int getMinimumDifference(TreeNode* root) {
    dfs(root);
    return ans;
  }
};
