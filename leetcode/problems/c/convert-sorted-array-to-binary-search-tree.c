// by @codeAntu
// O(n) time complexity

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    if(numsSize == 0)
        return NULL;
    struct TreeNode *newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    if(numsSize == 1){
        newNode->val = nums[0];
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    newNode->left = sortedArrayToBST(nums, numsSize / 2);
    newNode->val = nums[numsSize / 2];
    newNode->right = sortedArrayToBST(nums + (numsSize / 2) + 1, numsSize - (1 + (numsSize / 2)));
    return newNode;
}
