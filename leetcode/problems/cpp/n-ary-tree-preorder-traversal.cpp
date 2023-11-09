// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
using namespace std;

class Node {
  public:
   int val;
   vector<Node*> children;

   Node() {}

   Node(int _val) {
      val = _val;
   }

   Node(int _val, vector<Node*> _children) {
      val = _val;
      children = _children;
   }
};

class Solution {
   void dfs(Node* root, vector<int>& result) {
      if (root == nullptr) return;
      result.push_back(root->val);
      for (Node* child : root->children)
         dfs(child, result);
   }

  public:
   vector<int> preorder(Node* root) {
      vector<int> result;
      dfs(root, result);
      return result;
   }
};
