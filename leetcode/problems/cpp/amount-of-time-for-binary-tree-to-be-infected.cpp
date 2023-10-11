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
  int dfs(TreeNode* root, int start) {
    if (!root) return 0;
    int left = dfs(root->left, start);
    int right = dfs(root->right, start);
    if (root->val == start) {
      ans = max(ans, max(left, right));
      return -1;
    }
    if (left >= 0 and right >= 0) return max(left, right) + 1;
    ans = max(ans, abs(left) + abs(right));
    return min(left, right) - 1;
  }
public:
  int amountOfTime(TreeNode* root, int start) {
    ans = 0;
    dfs(root, start);
    return ans;
  }
};
