// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "stack"
using namespace std;

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class BSTIterator {
   stack<TreeNode*> st;
   void partInorder(TreeNode* root) {
      if (!root) return;
      while (root) {
         st.push(root);
         root = root->left;
      }
   }

public:
   BSTIterator(TreeNode* root) {
      partInorder(root);
   }

   int next() {
      TreeNode* top = st.top();
      st.pop();
      if (top->right) partInorder(top->right);
      return top->val;
   }

   bool hasNext() {
      return !st.empty();
   }
};