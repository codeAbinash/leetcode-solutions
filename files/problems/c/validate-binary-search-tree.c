bool check(struct TreeNode* root, long low, long high) {
    if (!root) return true;

    if (!(low < root->val && root->val < high)) return false;

    return check(root->left, low, root->val) && check(root->right, root->val, high);
}

bool isValidBST(struct TreeNode* root) {
    if (!root) return true;
    return check(root->left, LONG_MIN, root->val) && check(root->right, root->val, LONG_MAX);
}