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
   vector<int> result;
   void post(Node* node) {
      if (!node) return;
      for (auto& child : node->children)
         post(child);
      result.push_back(node->val);
   }
public:
   vector<int> postorder(Node* root) {
      post(root);
      return result;
   }
};