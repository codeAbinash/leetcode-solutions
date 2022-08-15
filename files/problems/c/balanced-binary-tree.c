// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

inline int max(int a, int b) { return a > b ? a : b; }

int height(struct TreeNode* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(struct TreeNode* root) {
    if (!root) return 1;
    int left = height(root->left);
    int right = height(root->right);
    return abs(left - right) <= 1 && isBalanced(root->left) &&
           isBalanced(root->right);
}