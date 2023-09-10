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
public:
   int maxAncestorDiff(TreeNode* root, int mini = INT_MAX, int maxi = INT_MIN) {
      if(!root) return maxi - mini;
      mini = min(mini, root->val);
      maxi = max(maxi, root->val);
      return max(maxAncestorDiff(root->left, mini, maxi), maxAncestorDiff(root->right, mini, maxi));
   }
};
