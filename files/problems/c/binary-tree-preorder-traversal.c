void preOrder(struct TreeNode* root, int* index, int* arr) {
    if (root != NULL) {
        arr[(*index)++] = root->val;
        preOrder(root->left, index, arr);
        preOrder(root->right, index, arr);
    }
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr = (int *)malloc(sizeof(int) * 100);
    *returnSize = 0;
    preOrder(root, returnSize, arr);
    return arr;
}