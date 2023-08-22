#include "stack"
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
   void dfs(TreeNode* root, stack<int>& level) {
      if (!root) return;
      if (root->left == nullptr && root->right == nullptr)
         level.push(root->val);
      dfs(root->left, level);
      dfs(root->right, level);
   }
public:
   bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      stack<int> leaves1, leaves2;
      dfs(root1, leaves1);
      dfs(root2, leaves2);
      return leaves1 == leaves2;
   }
};