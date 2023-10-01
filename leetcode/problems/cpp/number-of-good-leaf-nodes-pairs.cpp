// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
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
  int ans = 0;
  vector<int> dfs(TreeNode* root, int distance) {
    if (!root) return {};
    if (!root->left && !root->right) return { 1 };

    auto left = dfs(root->left, distance);
    auto right = dfs(root->right, distance);

    for (auto l : left)
      for (auto r : right)
        if (l + r <= distance) ans++;

    vector<int> ret;
    for (auto l : left)
      ret.push_back(l + 1);
    for (auto r : right)
      ret.push_back(r + 1);
    return ret;
  }
  int countPairs(TreeNode* root, int distance) {
    dfs(root, distance);
    return ans;
  }
};
