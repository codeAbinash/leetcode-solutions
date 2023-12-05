// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
#include "vector"
using namespace std;

class Node {
  public:
   int val;
   vector<Node*> children;
   Node() {}
   Node(int _val) { val = _val; }
   Node(int _val, vector<Node*> _children) {
      val = _val;
      children = _children;
   }
};

// Using DFS
class Solution {
  public:
   int maxDepth(Node* root) {
      if (!root) return 0;
      int depth = 0;
      for (auto child : root->children) depth = max(depth, maxDepth(child));
      return 1 + depth;
   }
};

// using BFS
class Solution {
  public:
   int maxDepth(Node* root) {
      if (!root) return 0;
      int depth = 0;
      queue<Node*> q;
      q.push(root);

      while (!q.empty()) {
         depth++;
         int width = q.size();
         while (width--) {
            auto node = q.front();
            q.pop();
            for (auto child : node->children)
               if (child) q.push(child);
         }
      }
      return depth;
   }
};
