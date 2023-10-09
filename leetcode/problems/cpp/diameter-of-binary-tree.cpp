// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "algorithm"
using namespace std;

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
  int dfs(TreeNode* root, int& ans) {
    if (!root) return 0;
    int left = dfs(root->left, ans);
    int right = dfs(root->right, ans);
    ans = max(ans, left + right);
    return max(left, right) + 1;
  }
public:
  int diameterOfBinaryTree(TreeNode* root) {
    dfs(root, ans);
    return ans;
  }
};
