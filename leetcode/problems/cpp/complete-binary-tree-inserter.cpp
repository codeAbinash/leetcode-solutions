// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
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

class CBTInserter {
  vector<TreeNode*> tree;
public:
  CBTInserter(TreeNode* root) {
    tree.push_back(root);
    for (int i = 0; i < tree.size(); i++) {
      if (tree[i]->left) tree.push_back(tree[i]->left);
      if (tree[i]->right) tree.push_back(tree[i]->right);
    }
  }

  int insert(int val) {
    int n = tree.size();
    TreeNode* node = new TreeNode(val);
    tree.push_back(node);
    if (n % 2) tree[(n - 1) / 2]->left = node;
    else tree[(n - 1) / 2]->right = node;
    return tree[(n - 1) / 2]->val;
  }

  TreeNode* get_root() {
    return tree[0];
  }
};


// Using queue
class CBTInserter {
  queue<TreeNode*> q;
  TreeNode* rootNode;
public:
  CBTInserter(TreeNode* root) {
    rootNode = root;
    q.push(root);
    while (q.front()->left && q.front()->right) {
      TreeNode* node = q.front();
      q.pop();
      q.push(node->left);
      q.push(node->right);
    }
  }

  int insert(int val) {
    int parent = q.front()->val;
    if (!q.front()->left) q.front()->left = new TreeNode(val);
    else {
      TreeNode* node = q.front();
      node->right = new TreeNode(val);
      q.pop();
      q.push(node->left);
      q.push(node->right);
    }
    return parent;
  }

  TreeNode* get_root() {
    return rootNode;
  }
};
