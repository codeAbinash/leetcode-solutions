// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "queue"
#include "vector"
#include "climits"
#include "algorithm"
using namespace std;


struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


// Using BFS
class Solution {
public:
   int maxLevelSum(TreeNode* root) {
      int maxSum = INT_MIN, currLevel = 1, maxLevel = 1;

      queue <TreeNode*> q;
      q.push(root);

      while (!q.empty()) {
         int sum = 0, len = q.size();
         while (len--) {
            auto front = q.front(); q.pop();
            sum += front->val;
            if (front->left) q.push(front->left);
            if (front->right) q.push(front->right);
         }
         if (sum > maxSum) {
            maxSum = sum;
            maxLevel = currLevel;
         }
         currLevel++;
      }
      return maxLevel;
   }
};


// Using DFS, Practically faster
class Solution {
public:
   vector<int> sums;
   int level = 1;

   void dfs(TreeNode* root) {
      if (!root) return;
      if (level > sums.size())
         sums.push_back(0);
      sums[level - 1] += root->val;
      level++;
      dfs(root->left);
      dfs(root->right);
      level--;
   }

   int maxLevelSum(TreeNode* root) {
      dfs(root);
      int ans = 0, sum_len = sums.size();
      for (int i = 0; i < sum_len; i++)
         if (sums[i] > sums[ans]) ans = i;
      return ans + 1;
   }
};
