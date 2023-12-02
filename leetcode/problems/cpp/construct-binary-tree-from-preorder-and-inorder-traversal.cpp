// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "unordered_map"
#include "vector"
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right)
       : val(x), left(left), right(right) {}
};

class Solution {
   unordered_map<int, int> inorderMap;
  public:
   TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
      for (int i = 0; i < inorder.size(); i++) 
         inorderMap[inorder[i]] = i;
      return buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
   }
   TreeNode *buildTree(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd) {
      if (preStart > preEnd) return nullptr;
      int rootVal = preorder[preStart];
      int rootIndex = inorderMap[rootVal];
      int leftSubtreeSize = rootIndex - inStart;
      TreeNode *root = new TreeNode(rootVal);
      root->left = buildTree(preorder, preStart + 1, preStart + leftSubtreeSize, inorder, inStart, rootIndex - 1);
      root->right = buildTree(preorder, preStart + leftSubtreeSize + 1, preEnd, inorder, rootIndex + 1, inEnd);
      return root;
   }
};

// Improved Solution
class Solution {
   int pi;
  public:
   TreeNode *build(vector<int> &preorder, unordered_map<int, int> &m_inorder, int left, int right) {
      if (left == right) return nullptr;
      TreeNode *root = new TreeNode(preorder[pi++]);
      int idx_root = m_inorder[root->val];
      root->left = build(preorder, m_inorder, left, idx_root);
      root->right = build(preorder, m_inorder, idx_root + 1, right);
      return root;
   }
   TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
      unordered_map<int, int> m_in;
      pi = 0;
      for (int i = 0; i < inorder.size(); ++i) m_in[inorder[i]] = i;
      return build(preorder, m_in, 0, inorder.size());
   }
};
