// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

void sumLeft(struct TreeNode *node, int *sum, bool left) {
    if (node == NULL) return;
    if (node->left == NULL && node->right == NULL && left) {
        *sum = *sum + node->val;
        return;
    }
    sumLeft(node->left, sum, 1);
    sumLeft(node->right, sum, 0);
}

int sumOfLeftLeaves(struct TreeNode *root) {
    int sum = 0;
    sumLeft(root, &sum, 0);
    return sum;
}