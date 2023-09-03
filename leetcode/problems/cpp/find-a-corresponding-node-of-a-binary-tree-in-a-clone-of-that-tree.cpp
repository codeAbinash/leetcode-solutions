// by @codeAbinash
// Time : O(n)
// Space : O(n)


#include "locale"
#include "queue"
using namespace std;

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


// Using DFS
class Solution {
public:
   TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      if (!original) return nullptr;
      if (original->val == target->val) return cloned;

      TreeNode* left = getTargetCopy(original->left, cloned->left, target);
      TreeNode* right = getTargetCopy(original->right, cloned->right, target);

      return left ? left : right;
   }
};


// Using BFS
class Solution {
public:
   TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      queue<TreeNode*> q;
      q.push(cloned);
      TreeNode* curr;
      while (true) {
         curr = q.front(); q.pop();
         if (curr) {
            if (curr->val == target->val) break;
            q.push(curr->left);
            q.push(curr->right);
         }
      }
      return curr;
   }
};
