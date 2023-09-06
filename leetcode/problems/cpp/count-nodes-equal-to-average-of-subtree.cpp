// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "iostream"
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
   int count = 0;
   pair<int,int> dfs(TreeNode* root) {
      if(!root) return {0,0};
      auto left = dfs(root->left);
      auto right = dfs(root->right);
      int sum = left.first + right.first + root->val;
      int nodes = left.second + right.second + 1;
      if(sum / nodes == root->val)
         count++;
      return {sum, nodes};
   }
public:
   int averageOfSubtree(TreeNode* root) {
      dfs(root);
      return count;
   }
};
