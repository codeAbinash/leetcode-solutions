int traverse(struct TreeNode* root, int i) {
    int x, y;
    i++;
    x = y = i;

    if (root->left && root->right) {
        x = traverse(root->left, i);
        y = traverse(root->right, i);
        return x > y ? y : x;
    }

    if (root->left) x = traverse(root->left, i);
    if (root->right) y = traverse(root->right, i);

    return x > y ? x : y;
}

int minDepth(struct TreeNode* root) {
    int i = 0;
    if (!root) return 0;
    return traverse(root, i);
}