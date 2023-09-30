// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
using namespace std;

class Node {
public:
  int val;
  Node* left;
  Node* right;
  Node* next;

  Node() : val(0), left(NULL), right(NULL), next(NULL) {}

  Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

  Node(int _val, Node* _left, Node* _right, Node* _next)
    : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
  Node* connect(Node* root) {
    if (!root) return nullptr;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
      int n = q.size();
      while (n--) {
        auto node = q.front();q.pop();
        if (n) node->next = q.front();
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }
    }
    return root;
  }
};
