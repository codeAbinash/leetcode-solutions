// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
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
   vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> res;
      if (!root) return res;
      queue<TreeNode*> q;
      q.push(root);
      while (!q.empty()) {
         int size = q.size();
         vector<int> level;
         while (size--) {
            TreeNode* node = q.front();
            q.pop();
            level.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
         }
         res.push_back(level);
      }
      return res;
   }
};
