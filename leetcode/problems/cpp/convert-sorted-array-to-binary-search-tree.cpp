// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "iostream"
#include "vector"
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
   TreeNode* makeTree(int left, int right, vector<int>& nums) {
      if (left >= right) return NULL;
      int mid = (left + right) / 2;
      TreeNode* newNode = new TreeNode(nums[mid]);
      newNode->left = makeTree(left, mid, nums);
      newNode->right = makeTree(mid + 1, right, nums);
      return newNode;
   }
public:
   TreeNode* sortedArrayToBST(vector<int>& nums) {
      return makeTree(0, nums.size(), nums);
   }
};