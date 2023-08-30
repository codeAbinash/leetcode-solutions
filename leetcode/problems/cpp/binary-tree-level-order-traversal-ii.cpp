// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "iostream"
#include "vector"
#include "stack"
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
   vector<vector<int>> levelOrderBottom(TreeNode* root) {
      vector<vector<int>> ans;
      if (!root) return ans;

      queue<TreeNode*> q;
      q.push(root);

      vector<int> tmp;
      while (!q.empty()) {
         int size = q.size();
         while (size--) {
            TreeNode* front = q.front();
            q.pop();
            tmp.push_back(front->val);
            if (front->left) q.push(front->left);
            if (front->right) q.push(front->right);
         }
         ans.push_back(tmp);
         tmp.clear();
      }

      reverse(ans.begin(), ans.end());
      return ans;
   }
};


// Using a Stack

class Solution {

public:
   vector<vector<int>> levelOrderBottom(TreeNode* root) {
      vector<vector<int>> ans;
      stack<vector<int>> stk;
      if (!root) return ans;

      queue<TreeNode*> q;
      q.push(root);

      vector<int> tmp;
      while (!q.empty()) {
         int size = q.size();
         while (size--) {
            TreeNode* front = q.front();
            q.pop();
            tmp.push_back(front->val);
            if (front->left) q.push(front->left);
            if (front->right) q.push(front->right);
         }
         stk.push(tmp);
         tmp.clear();
      }

      while (!stk.empty()) {
         ans.push_back(stk.top());
         stk.pop();
      }
      return ans;
   }
};

