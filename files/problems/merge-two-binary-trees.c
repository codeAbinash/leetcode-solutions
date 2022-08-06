struct TreeNode* createNewNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    return newNode;
}

struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2) {
    int val1 = root1 ? root1->val : 0;
    int val2 = root2 ? root2->val : 0;
    if (!root1 && !root2) return NULL;

    struct TreeNode * newNode = createNewNode(val1 + val2);

    newNode->left =
        mergeTrees(root1 ? root1->left : NULL, root2 ? root2->left : NULL);
    newNode->right =
        mergeTrees(root1 ? root1->right : NULL, root2 ? root2->right : NULL);
    return newNode;
}