// by @codeAbinash

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


// Solution 1 : Brute Force
// Time : O(n * n)

class Solution {
   int result = 0;
public:
   int pathSum(TreeNode* root, int targetSum) {
      dfs(root, targetSum);
      return result;
   }
   void dfs(TreeNode* root, int sum) {
      if (root == nullptr) return;
      dfs(root->left, sum);
      dfs(root->right, sum);
      dfs2(root, sum);
   }
   void dfs2(TreeNode* root, long int sum) {
      if (root == nullptr) return;
      if (root->val == sum) result++;
      dfs2(root->left, sum - root->val);
      dfs2(root->right, sum - root->val);
   }
};



// Solution 2 : Optimized
// Time : O(n)

class Solution {
public:
   unordered_map<long, long> map;
   int total = 0;
   int pathSum(TreeNode* root, int target) {
      map[0] = 1;
      dfs(root, 0, target);
      return total;
   }
   void dfs(TreeNode* root, long current, int target) {
      if (!root) return;
      current += root->val; // add current node to current sum
      if (map.count(current - target)) // if current - target exists in map
         total += map[current - target]; // add to total
      map[current]++; // add current to map
      dfs(root->left, current, target);
      dfs(root->right, current, target);
      map[current]--; // backtrack
   }
};
