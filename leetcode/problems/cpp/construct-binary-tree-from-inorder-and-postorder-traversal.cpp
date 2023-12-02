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
   TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
      for (int i = 0; i < inorder.size(); i++) inorderMap[inorder[i]] = i;
      return buildTree(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
   }
   TreeNode *buildTree(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int postStart, int postEnd) {
      if (postStart > postEnd) return nullptr;
      int rootVal = postorder[postEnd];
      int rootIndex = inorderMap[rootVal];
      int leftSubtreeSize = rootIndex - inStart;
      TreeNode *root = new TreeNode(rootVal);
      root->left = buildTree(inorder, inStart, rootIndex - 1, postorder, postStart, postStart + leftSubtreeSize - 1);
      root->right = buildTree(inorder, rootIndex + 1, inEnd, postorder, postStart + leftSubtreeSize, postEnd - 1);
      return root;
   }
};
