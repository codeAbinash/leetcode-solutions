// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "queue"
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
public:
  vector<int> largestValues(TreeNode* root) {
    vector<int> res;
    if (!root) return res;
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
      int size = q.size();
      int max = INT_MIN;
      for (int i = 0; i < size;i++) {
        auto node = q.front(); q.pop();
        if (node->val > max) max = node->val;
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }
      res.push_back(max);
    }

    return res;
  }
};
