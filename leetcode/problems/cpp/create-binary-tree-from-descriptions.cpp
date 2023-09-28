// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
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

class Solution {
public:
   TreeNode* createBinaryTree(vector<vector<int>>& desc) {
      unordered_map<int, TreeNode*> mp;
      int xr = 0;
      for (auto& it : desc) {
         if (mp.find(it[0]) == mp.end()) {
            mp[it[0]] = new TreeNode(it[0]);
            xr ^= it[0];
         }
         if (mp.find(it[1]) == mp.end()) {
            mp[it[1]] = new TreeNode(it[1]);
            xr ^= it[1];
         }
      }
      for (auto& it : desc) {
         if (it[2] == 1) mp[it[0]]->left = mp[it[1]];
         else mp[it[0]]->right = mp[it[1]];
         xr ^= it[1];
      }
      return mp[xr];
   }
};
