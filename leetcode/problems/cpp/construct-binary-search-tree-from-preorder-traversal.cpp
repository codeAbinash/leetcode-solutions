// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "climits"
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
   int index = 0;
   TreeNode* helper(vector<int>& arr, int parent_val) {
      if (index >= arr.size() || arr[index] > parent_val)
         return nullptr;
      auto n = new TreeNode(arr[index++]);
      n->left = helper(arr, n->val);
      n->right = helper(arr, parent_val);
      return n;
   }
public:
   TreeNode* bstFromPreorder(vector<int>& preorder) {
      return helper(preorder, INT_MAX);
   }
};
