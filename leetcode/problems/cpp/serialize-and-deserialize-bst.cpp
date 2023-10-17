// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "string"
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
  string serialize(TreeNode* root) {
    string order;
    inorderDFS(root, order);
    return order;
  }

  inline void inorderDFS(TreeNode* root, string& order) {
    if (!root) return;
    char buffer[4];
    memcpy(buffer, &(root->val), sizeof(int));
    for (int i = 0; i < 4; i++) order.push_back(buffer[i]);
    inorderDFS(root->left, order);
    inorderDFS(root->right, order);
  }

  TreeNode* deserialize(string data) {
    int pos = 0;
    return reconstruct(data, pos, INT_MIN, INT_MAX);
  }

  inline TreeNode* reconstruct(const string& buffer, int& pos, int minValue, int maxValue) {
    if (pos >= buffer.size()) return NULL;

    int value;
    memcpy(&value, &buffer[pos], sizeof(int));
    if (value < minValue || value > maxValue) return NULL;

    TreeNode* node = new TreeNode(value);
    pos += sizeof(int);
    node->left = reconstruct(buffer, pos, minValue, value);
    node->right = reconstruct(buffer, pos, value, maxValue);
    return node;
  }
};
