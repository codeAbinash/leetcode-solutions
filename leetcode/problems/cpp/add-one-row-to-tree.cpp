// by @codeAbinash
// Time : O(n)
// Space : O(n)

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
  void bfs(TreeNode* root, int val, int depth) {
    int d = 1;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      int size = q.size();
      for (int i = 0;i < size;i++) {
        TreeNode* node = q.front();q.pop();
        if (d == depth) {
          TreeNode* left = new TreeNode(val);
          TreeNode* right = new TreeNode(val);

          left->left = node->left;
          right->right = node->right;

          node->left = left;
          node->right = right;
        } else {
          if (node->left) q.push(node->left);
          if (node->right) q.push(node->right);
        }
      }
      d++;
    }
  }
public:
  TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if (depth == 1) {
      TreeNode* node = new TreeNode(val);
      node->left = root;
      return node;
    }
    bfs(root, val, depth);
    return root;
  }
};

// Improved BFS
class Solution {
  void addOne(TreeNode* root, int val, int depth) {
    int h = 1;
    TreeNode* dummy = root;
    queue<TreeNode*> q;q.push(root);
    while (h != depth - 1) {
      int size = q.size();
      for (int i = 0;i < size;i++) {
        TreeNode* it = q.front();q.pop();
        if (it->left) q.push(it->left);
        if (it->right) q.push(it->right);
      }
      h++;
    }
    while (!q.empty()) {
      TreeNode* it = q.front();q.pop();
      TreeNode* left = new TreeNode(val);
      TreeNode* right = new TreeNode(val);

      left->left = it->left;
      right->right = it->right;

      it->left = left;
      it->right = right;
    }
  }
public:
  TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if (depth == 1) {
      TreeNode* node = new TreeNode(val);
      node->left = root;
      return node;
    }
    addOne(root, val, depth);
    return root;
  }
};


// Using DFS
class Solution {
public:
  TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if (depth == 1) {
      TreeNode* node = new TreeNode(val);
      node->left = root;
      return node;
    }
    dfs(root, val, depth, 1);
    return root;
  }
  void dfs(TreeNode* root, int val, int depth, int d) {
    if (!root) return;
    if (d == depth - 1) {
      TreeNode* left = new TreeNode(val);
      TreeNode* right = new TreeNode(val);
      left->left = root->left;
      right->right = root->right;
      root->left = left;
      root->right = right;

    } else {
      dfs(root->left, val, depth, d + 1);
      dfs(root->right, val, depth, d + 1);
    }
  }
};
