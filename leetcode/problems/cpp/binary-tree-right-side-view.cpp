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


// Using BFS
class Solution {
public:
   vector<int> rightSideView(TreeNode* root) {
      vector<int> ans;
      if (!root) return ans;

      queue<TreeNode*> q;
      q.push(root);

      while (!q.empty()) {
         int len = q.size();
         ans.push_back(q.back()->val);
         while (len--) {
            TreeNode* front = q.front();
            q.pop();
            if (front->left) q.push(front->left);
            if (front->right) q.push(front->right);
         }
      }
      return ans;
   }
};


// Using DFS
class Solution {
public:
   vector<int> rightSideView(TreeNode* root) {
      vector<int> ans;
      rightView(root, 0, ans);
      return ans;
   }
   void rightView(TreeNode* root, int level, vector<int>& ans) {
      if (!root) return;
      if (level == ans.size())
         ans.push_back(root->val);
      rightView(root->right, level + 1, ans);
      rightView(root->left, level + 1, ans);
   }
};
