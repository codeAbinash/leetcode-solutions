// by @codeAbinash
// Time : O(n^2)
// Space : O(n)

#include "vector"
#include "string"
#include "unordered_map"
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
  vector<TreeNode*> res;
  unordered_map<string, int> map;
  vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
    dfs(root);
    return res;
  }

  string dfs(TreeNode* root) {
    if (!root) return "#";
    string left = dfs(root->left);
    string right = dfs(root->right);
    string subTree = left + "," + right + "," + to_string(root->val);
    if (map[subTree] == 1) res.push_back(root);
    map[subTree]++;
    return subTree;
  }
};
