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

class Solution {
public:
   vector<vector<int>> result;
   vector<int> tmp;

   void backTrack(TreeNode* node, int targetSum) {
      if (!node) return;
      tmp.push_back(node->val);
      if (!node->left && !node->right && targetSum - node->val == 0) {
         result.push_back(tmp);
      }
      backTrack(node->left, targetSum - node->val);
      backTrack(node->right, targetSum - node->val);
      tmp.pop_back();
   }

   vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      backTrack(root, targetSum);
      return result;
   }
};