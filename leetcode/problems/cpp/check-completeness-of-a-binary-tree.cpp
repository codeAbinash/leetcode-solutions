// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
#include "vector"
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
  public:
   bool isCompleteTree(TreeNode *root) {
      if (!root) return true;
      vector<TreeNode *> temp;
      temp.push_back(root);
      int i = 0;
      while (!temp.empty() && i < temp.size()) {
         if (!temp[i]) break;
         temp.push_back(temp[i]->left);
         temp.push_back(temp[i]->right);
         i++;
      }
      while (i < temp.size() && !temp[i]) i++;
      return i == temp.size();
   }
};
