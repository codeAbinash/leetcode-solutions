// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
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
   TreeNode* replaceValueInTree(TreeNode* root) {
      queue<TreeNode*> q;  q.push(root);
      root->val = 0;
      while (!q.empty()) {
         int n = q.size(), sum = 0;
         vector<TreeNode*> buffer;
         while (n--) {
            TreeNode* node = q.front(); q.pop();
            buffer.push_back(node);
            if (node->left) {
               q.push(node->left);
               sum += node->left->val;
            }
            if (node->right) {
               q.push(node->right);
               sum += node->right->val;
            }
         }
         for (auto node : buffer) {
            int  t = sum;
            if (node->left)  t -= node->left->val;
            if (node->right) t -= node->right->val;
            if (node->left)  node->left->val = t;
            if (node->right) node->right->val = t;
         }
      }
      return root;
   }
};
