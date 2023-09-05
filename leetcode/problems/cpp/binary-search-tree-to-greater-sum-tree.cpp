// by @codeAbinash
// Time : O(n)
// Space : O(n)

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    int count = 0;
    void gst(TreeNode *root){
        if(!root) return;
        gst(root->right);
        root->val += count;
        count = root->val;
        gst(root->left);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        gst(root);
        return root;
    }
};
