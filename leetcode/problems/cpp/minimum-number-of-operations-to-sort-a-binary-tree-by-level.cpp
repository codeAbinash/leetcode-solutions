// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
#include "vector"
#include "numeric"
#include "algorithm"
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
  int minimumOperations(TreeNode* root) {
    int res = 0;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      int n = q.size();
      vector<int> values;
      while (n--) {
        auto node = q.front();q.pop();
        values.push_back(node->val);
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }
      res += countSwap(values);
    }
    return res;
  }
  int countSwap(vector<int>& values) {
    vector<int> ids(values.size());
    iota(ids.begin(), ids.end(), 0);
    sort(ids.begin(), ids.end(), [&](int i, int j) {return values[i] < values[j];});
    int res = 0;
    for (int i = 0; i < ids.size(); ++i) {
      if (ids[i] == i) continue;
      swap(ids[i], ids[ids[i]]);
      ++res;
      --i;
    }
    return res;
  }
};
