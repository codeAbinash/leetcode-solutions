// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "string"
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
public:
  vector<vector<string>> printTree(TreeNode* root) {
    int h = height(root);
    int w = (1 << h) - 1;
    vector<vector<string>> res(h, vector<string>(w, ""));
    dfs(root, res, 0, w - 1, h, 0);
    return res;
  }

  void dfs(TreeNode* root, vector<vector<string>>& res, int left, int right, int height, int level) {
    if (!root || height == level) return;
    int mid = (left + right) >> 1;
    res[level][mid] = to_string(root->val);
    dfs(root->left, res, left, mid - 1, height, level + 1);
    dfs(root->right, res, mid + 1, right, height, level + 1);
  }

  int height(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
  }
};
