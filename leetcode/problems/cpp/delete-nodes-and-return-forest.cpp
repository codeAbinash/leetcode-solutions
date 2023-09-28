// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "unordered_set"
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
   vector<TreeNode*> ans;
   unordered_set<int> to_delete_set;
public:
   vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
      for (int i : to_delete) to_delete_set.insert(i);
      dfs(root, true);
      return ans;
   }
   TreeNode* dfs(TreeNode* root, bool is_root) {
      if (!root) return nullptr;
      bool deleted = to_delete_set.find(root->val) != to_delete_set.end();
      if (is_root && !deleted) ans.push_back(root);
      root->left = dfs(root->left, deleted);
      root->right = dfs(root->right, deleted);
      return deleted ? nullptr : root;
   }
};
