// by @codeAbinash
// Time Complexity : O(log n)
// Space Complexity : O(1)

class Solution {
   public:
    TreeNode *searchBST(TreeNode *root, int val) {
        if (root == nullptr) return nullptr;
        if (root->val == val) return root;
        if (root->val > val) return searchBST(root->left, val);
        return searchBST(root->right, val);
    }
};