struct TreeNode *insertIntoBST(struct TreeNode *root, int val) {
    struct TreeNode *prev = NULL, *tmp = root;
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = newNode->right = NULL;

    while (root != NULL) {
        prev = root;
        if (val < root->val)
            root = root->left;
        else
            root = root->right;
    }

    if (prev == NULL) {
        root = newNode;
        return root;
    }

    if (val < prev->val)
        prev->left = newNode;
    else
        prev->right = newNode;
    return tmp;
}