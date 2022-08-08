bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(!p && !q)
        return true;
    else if(!p || !q)
        return false;
    
    if(p->val == q->val)
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    return false;
}