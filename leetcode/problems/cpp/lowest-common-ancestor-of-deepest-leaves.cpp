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


struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
   TreeNode* ans;
   int maxDepth = 0;

   int dfs(TreeNode* node, int depth) {
      maxDepth = max(maxDepth, depth);
      if (!node)return depth;
      int left = dfs(node->left, depth + 1);
      int right = dfs(node->right, depth + 1);
      if (left == maxDepth && right == maxDepth) {
         ans = node;
      }
      return max(left, right);
   }
public:
   TreeNode* lcaDeepestLeaves(TreeNode* root) {
      dfs(root, 0);
      return ans;
   }
};
