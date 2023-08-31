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
   vector<string> result;
   string tmp;

   void removeLast() {
      while (tmp.back() != '>')
         tmp.pop_back();
      tmp.pop_back();
      tmp.pop_back();
   }

   void dfs(TreeNode* root) {
      if (!root) return;
      tmp.push_back('-'), tmp.push_back('>');
      tmp += to_string(root->val);

      dfs(root->left);
      dfs(root->right);
      if (!root->left && !root->right)
         result.push_back(tmp);
      removeLast();
   }
public:
   vector<string> binaryTreePaths(TreeNode* root) {
      if (!root) return result;
      tmp = to_string(root->val);
      if (!root->left && !root->right)
         result.push_back(tmp);
      dfs(root->left);
      dfs(root->right);
      return result;
   }
};
