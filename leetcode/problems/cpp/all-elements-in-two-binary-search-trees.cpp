// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
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

// Memory efficient
class Solution {
   void left(TreeNode* root, stack<TreeNode*>& s) {
      while (root) {
         s.push(root);
         root = root->left;
      }
   }
public:
   vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
      vector<int> result;
      stack<TreeNode*> s1, s2;
      left(root1, s1);
      left(root2, s2);

      while (!s1.empty() || !s2.empty()) {
         stack<TreeNode*>& s = s1.empty() ?
            s2 : s2.empty() ?
            s1 : s1.top()->val < s2.top()->val ?
            s1 : s2;
         TreeNode* node = s.top(); s.pop();
         result.push_back(node->val);
         left(node->right, s);
      }
      return result;
   }
};

// Time efficient
class Solution {
   void inorder(TreeNode* root, vector<int>& result) {
      if (!root) return;
      inorder(root->left, result);
      result.push_back(root->val);
      inorder(root->right, result);
   }
public:
   vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
      int i, j;
      vector<int> r1, r2, result;
   
      inorder(root1, r1);
      inorder(root2, r2);

      for (i = 0, j = 0; i < r1.size() && j < r2.size();) {
         if (r1[i] < r2[j]) result.push_back(r1[i++]);
         else result.push_back(r2[j++]);
      }

      while (i < r1.size()) result.push_back(r1[i++]);
      while (j < r2.size()) result.push_back(r2[j++]);

      return result;
   }
};
