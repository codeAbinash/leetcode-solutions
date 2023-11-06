// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "climits"
#include "set"
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
   set<int> s;

  public:
   int findSecondMinimumValue(TreeNode *root) {
      dfs(root);
      if (s.size() < 2) return -1;
      auto it = s.begin();
      it++;
      return *it;
   }

   void dfs(TreeNode *node) {
      if (!node) return;
      s.insert(node->val);
      dfs(node->left);
      dfs(node->right);
   }
};

// Another Solution
class Solution {
  public:
   int ans = INT_MAX;
   int x = INT_MAX;
   int flag = 0;
   void dfs(TreeNode *root) {
      if (root == NULL)
         return;
      x = min(x, root->val);
      if (root->val > x) {
         flag = 1;
         ans = min(ans, root->val);
      }
      dfs(root->left);
      dfs(root->right);
   }
   int findSecondMinimumValue(TreeNode *root) {
      dfs(root);
      if (flag == 0)
         return -1;
      return ans;
   }
};
