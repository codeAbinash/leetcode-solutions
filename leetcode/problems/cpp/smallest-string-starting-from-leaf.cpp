// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "string"
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
   string tmp, ans;
   void dfs(TreeNode* root) {
      if (!root) return;
      tmp.push_back('a' + root->val);
      if (!root->left && !root->right) {
         reverse(tmp.begin(), tmp.end());
         if (ans.empty() || tmp < ans) ans = tmp;
         reverse(tmp.begin(), tmp.end());
      }
      dfs(root->left);
      dfs(root->right);
      tmp.pop_back();
   }
public:
   string smallestFromLeaf(TreeNode* root) {
      dfs(root);
      return ans;
   }
};
