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
  string tree2str(TreeNode* root) {
    string res;
    makeString(root, res);
    return res;
  }

  void makeString(TreeNode* root, string& res) {
    if (!root) return;
    res += to_string(root->val);
    if (root->left) {
      res += "(";
      makeString(root->left, res);
      res += ")";
    }
    if (root->right) {
      if (!root->left) res += "()";
      res += "(";
      makeString(root->right, res);
      res += ")";
    }

  }
};
