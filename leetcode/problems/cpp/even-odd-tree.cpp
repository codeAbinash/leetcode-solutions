// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "climits"
#include "queue"
#include "vector"
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
  public:
   bool isEvenOddTree(TreeNode *root) {
      if (!root) return false;
      queue<TreeNode *> q;
      q.push(root);
      int level = 0;
      while (!q.empty()) {
         int size = q.size();
         vector<int> ans;
         int n = -1;
         for (int i = 0; i < size; i++) {
            TreeNode *node = q.front();
            int temp = node->val;
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);

            if (level % 2 == 0) {
               if (temp % 2 == 0) return false;
               if (temp <= n) return false;
            } else {
               if (temp % 2 != 0) return false;
               if (n > 0 && temp >= n) return false;
            }
            n = temp;
         }
         level++;
      }
      return true;
   }
};
