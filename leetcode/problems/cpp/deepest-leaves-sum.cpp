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
   int deepestLeavesSum(TreeNode* root) {
      if (!root) return 0;
      int sum;
      queue<TreeNode*> q;
      q.push(root);

      while (!q.empty()) {
         int len = q.size();
         sum = 0;
         while (len--) {
            TreeNode* front = q.front();q.pop();
            sum += front->val;
            if (front->left) q.push(front->left);
            if (front->right) q.push(front->right);
         }
      }
      return sum;
   }
};

// Using DFS
class Solution {
   int sum = 0;
   void sumK(TreeNode* root, int k) {
      if (!root) return;
      if (k == 0)
         sum += root->val;
      sumK(root->left, k - 1);
      sumK(root->right, k - 1);
   }

   int height(TreeNode* root) {
      if (!root) return;
      return max(height(root->left), height(root->right)) + 1;
   }

public:
   int deepestLeavesSum(TreeNode* root) {
      if (!root) return 0;
      int h = height(root);
      sumK(root, h - 1);
      return sum;
   }
};
