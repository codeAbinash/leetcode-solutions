bool traverse(struct TreeNode* leftNode, struct TreeNode* rightNode){
    if(!leftNode && !rightNode) return true;
    if(!(leftNode && rightNode)) return false;
    if(leftNode->val != rightNode->val) return false;
    return traverse(leftNode->left, rightNode->right) && traverse(leftNode->right, rightNode->left);
}

bool isSymmetric(struct TreeNode* root) {
    if (!root) return true;
    return traverse(root->left, root->right);
}