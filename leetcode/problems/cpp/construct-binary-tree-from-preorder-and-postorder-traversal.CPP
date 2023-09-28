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


// Recursuve
class Solution {
   int preIndex, postIndex;
   TreeNode* construct(vector<int>& pre, vector<int>& post) {
      TreeNode* root = new TreeNode(pre[preIndex++]);
      if (root->val != post[postIndex])
         root->left = construct(pre, post);
      if (root->val != post[postIndex])
         root->right = construct(pre, post);
      postIndex++;
      return root;
   }
public:
   TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
      preIndex = postIndex = 0;
      return construct(preorder, postorder);
   }
};


// Iterative
class Solution {
public:
   TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
      stack<TreeNode*> s;
      TreeNode* root = new TreeNode(pre[0]);
      s.push(root);
      for (int i = 1, j = 0; i < pre.size(); ++i) {
         TreeNode* node = new TreeNode(pre[i]);
         while (s.top()->val == post[j]) {
            s.pop();
            ++j;
         }
         if (s.top()->left == nullptr)
            s.top()->left = node;
         else
            s.top()->right = node;
         s.push(node);
      }
      return root;
   }
};
