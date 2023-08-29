// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "queue"
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
   vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>> ans;
      queue<TreeNode*> q;
      bool dir = true;

      if (!root) return ans;
      q.push(root);
      vector<int> tmp;

      while (!q.empty()) {
         int size = q.size();
         while (size--) {
            TreeNode* front = q.front();
            tmp.push_back(front->val);
            q.pop();
            if (front->left) q.push(front->left);
            if (front->right) q.push(front->right);
         }
         if (dir = !dir)
            reverse(tmp.begin(), tmp.end());
         ans.push_back(tmp);
         tmp.clear();
      }

      return ans;
   }
};