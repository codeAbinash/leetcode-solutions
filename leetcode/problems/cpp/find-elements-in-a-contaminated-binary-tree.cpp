// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "unordered_set"
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

class FindElements {
   TreeNode* root;
   void recover(TreeNode* root, int val) {
      if(!root) return;
      root->val = val;
      recover(root->left, 2 * val + 1);
      recover(root->right, 2 * val + 2);
   }
public:
   FindElements(TreeNode* root) {
      this->root = root;
      if(!root) return;
      root->val = 0;
      recover(root->left, 1);
      recover(root->right, 2);
   }

   bool findIt(TreeNode* root, int target) {
      if(!root) return false;
      if(root->val == target) return true;
      return findIt(root->left, target) || findIt(root->right, target);
   }

   bool find(int target) {
      return findIt(root, target);
   }
};


// Using Unordered Set
class FindElements{
   unordered_set<int> s;
public:
   FindElements(TreeNode* root) {
      if(!root) return;
      root->val = 0;
      s.insert(0);
      recover(root->left, 1);
      recover(root->right, 2);
   }
   void recover(TreeNode* root, int val) {
      if(!root) return;
      root->val = val;
      s.insert(val);
      recover(root->left, 2 * val + 1);
      recover(root->right, 2 * val + 2);
   }
   bool find(int target) {
      return s.find(target) != s.end();
   }
};



// Using Unordered Map
class FindElements{
   unordered_map<int, bool> m;
public:
   FindElements(TreeNode* root) {
      if(!root) return;
      root->val = 0;
      m[0] = true;
      recover(root->left, 1);
      recover(root->right, 2);
   }
   void recover(TreeNode* root, int val) {
      if(!root) return;
      root->val = val;
      m[val] = true;
      recover(root->left, 2 * val + 1);
      recover(root->right, 2 * val + 2);
   }
   bool find(int target) {
      return m[target];
   }
};
