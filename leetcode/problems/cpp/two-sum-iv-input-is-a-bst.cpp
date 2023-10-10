// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "unordered_set"
#include "queue"
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
  bool findTarget(TreeNode* root, int k) {
    if (!root) return false;
    unordered_set<int> s;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      TreeNode* node = q.front();
      q.pop();
      if (s.count(k - node->val)) return true;
      s.insert(node->val);
      if (node->left) q.push(node->left);
      if (node->right) q.push(node->right);
    }
    return false;
  }
};


// Using BST property
class Solution {
private:
  bool dfs(TreeNode* root, TreeNode* node, int k) {
    if (!node) return false;
    return search(root, node, k - node->val) || dfs(root, node->left, k) || dfs(root, node->right, k);
  }
  bool search(TreeNode* root, TreeNode* node, int val) {
    if (!root) return false;
    return (root->val == val) && (root != node) || (root->val < val) && search(root->right, node, val) || (root->val > val) && search(root->left, node, val);
  }
public:
  bool findTarget(TreeNode* root, int k) {
    if (!root) return false;
    return dfs(root, root, k);
  }
};


// Using inorder traversal
class Solution {
private:
  void inorder(TreeNode* root, vector<int>& v) {
    if (!root) return;
    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);
  }
public:
  bool findTarget(TreeNode* root, int k) {
    if (!root) return false;
    vector<int> v;
    inorder(root, v);
    int i = 0, j = v.size() - 1;
    while (i < j) {
      int sum = v[i] + v[j];
      if (sum == k) return true;
      if (sum < k) i++;
      else j--;
    }
    return false;
  }
};
