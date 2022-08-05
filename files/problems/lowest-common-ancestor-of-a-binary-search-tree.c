struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p,struct TreeNode* q) {
    if (root == NULL) return NULL;

    if (q->val > root->val && p->val > root->val)
        root = lowestCommonAncestor(root->right, p, q);

    if (q->val < root->val && p->val < root->val)
        root = lowestCommonAncestor(root->left, p, q);
    return root;
}