// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "unordered_map"
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
  unordered_map<int, int> freq;
  int maxFreq = 0;
public:
  vector<int> findFrequentTreeSum(TreeNode* root) {
    dfs(root);
    vector<int> res;
    for (auto& f : freq) {
      if (f.second == maxFreq) res.push_back(f.first);
    }
    return res;
  }
  int dfs(TreeNode* root) {
    if (!root) return 0;
    int s = dfs(root->left) + dfs(root->right) + root->val;
    maxFreq = max(maxFreq, ++freq[s]);
    return s;
  }
};
