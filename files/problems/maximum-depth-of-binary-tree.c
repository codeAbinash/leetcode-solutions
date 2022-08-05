int maxDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;
    int leftDepth = maxDepth(root->left);
    int rigthDepth = maxDepth(root->right);
    return (leftDepth > rigthDepth ? leftDepth : rigthDepth) + 1;
}