void traverse(struct TreeNode *root, int *arr, int *index) {
    if (!root) return;
    traverse(root->left, arr, index);
    arr[(*index)++] = root->val;
    traverse(root->right, arr, index);
}

bool findTarget(struct TreeNode *root, int k) {
    int *arr = malloc(sizeof(int) * 10000), index = 0, sum = 0;
    traverse(root, arr, &index);
    int i = 0, j = index - 1;
    while (i < j) {
        sum = arr[i] + arr[j];
        if (sum > k) j--;
        else if (sum < k) i++;
        else break;
    }
    return i != j;
}