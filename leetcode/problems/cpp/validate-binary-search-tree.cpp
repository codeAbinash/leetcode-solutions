// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "climits"
#include "stack"
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
   bool isValid(TreeNode *root, TreeNode *min, TreeNode *max) {
      if (root == nullptr) return true;
      if (min != nullptr && root->val <= min->val) return false;
      if (max != nullptr && root->val >= max->val) return false;
      return isValid(root->left, min, root) && isValid(root->right, root, max);
   }

  public:
   bool isValidBST(TreeNode *root) {
      return isValid(root, nullptr, nullptr);
   }
};

// Using inorder traversal
class Solution {
   TreeNode *prev = nullptr;

  public:
   bool isValidBST(TreeNode *root) {
      if (root == nullptr) return true;
      if (!isValidBST(root->left)) return false;
      if (prev != nullptr && root->val <= prev->val) return false;
      prev = root;
      return isValidBST(root->right);
   }
};

// Using inorder traversal iterative
class Solution {
  public:
   bool isValidBST(TreeNode *root) {
      stack<TreeNode *> st;
      TreeNode *prev = nullptr;
      while (root != nullptr || !st.empty()) {
         while (root != nullptr) {
            st.push(root);
            root = root->left;
         }
         root = st.top();
         st.pop();
         if (prev != nullptr && root->val <= prev->val) return false;
         prev = root;
         root = root->right;
      }
      return true;
   }
};

// Using inorder traversal vector
class Solution {
  public:
   vector<int> v;

   bool isValidBST(TreeNode *root) {
      inorder(root);
      for (int i = 1; i < v.size(); i++)
         if (v[i] <= v[i - 1]) return false;
      return true;
   }

   void inorder(TreeNode *root) {
      if (!root) return;
      inorder(root->left);
      v.push_back(root->val);
      inorder(root->right);
   }
};
