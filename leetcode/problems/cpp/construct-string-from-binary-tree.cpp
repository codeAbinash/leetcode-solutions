// by @codeAbinash

class Solution {
   public:
    string tree2str(TreeNode *root) {
        string ans = to_string(root->val);
        if (root->left) ans += "(" + tree2str(root->left) + ")";
        if (root->right) {
            if (!root->left) ans += "()";
            ans += "(" + tree2str(root->right) + ")";
        }
        return ans;
    }
};