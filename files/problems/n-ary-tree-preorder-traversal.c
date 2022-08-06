void order(struct Node *root, int *arr, int *index){ 
    if(root == NULL)
        return;
    arr[*index] = root->val;
    *index = *index + 1;

    for(int i = 0; i < root->numChildren; i++)
        order(root->children[i], arr, index);
}
int* preorder(struct Node* root, int* returnSize) {
    int index = 0;
    int *resArr = (int *)malloc(10000 * sizeof(int));
    order(root, resArr, &index);
    *returnSize = index;
    return resArr;
}