void inOrder(struct TreeNode* root, int* index, int* arr) {
    if (root != NULL) {
        inOrder(root->left, index, arr);
        inOrder(root->right, index, arr);
        arr[(*index)++] = root->val;
    }
}
int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int *arr = (int *)malloc(sizeof(int) * 100);
    *returnSize = 0;
    inOrder(root, returnSize, arr);
    return arr;
}