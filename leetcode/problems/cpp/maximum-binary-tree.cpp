// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "vector"
#include "stack"
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
   TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
      stack<TreeNode*> st;
      for(auto num : nums){
         TreeNode * curr = new TreeNode(num);
         while(!st.empty() && st.top()->val < num){
            curr->left = st.top();
            st.pop();
         }
         if(!st.empty())
            st.top()->right = curr;
         st.push(curr);
      }
      while(st.size() > 1)
         st.pop();
      return st.top();
   }
};
