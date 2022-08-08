int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int low = 0, high = numsSize - 1, target = high;
    *returnSize = numsSize;
    int *newArr = (int *) malloc(sizeof(int) * numsSize);

    while (low <= high) {
        if (pow(nums[high], 2) > pow(nums[low],2)){
            newArr[target] = pow(nums[high], 2);
            high--;
        }
        else{
            newArr[target] = pow(nums[low], 2);
            low++;
        }
        target--;
    }
    return newArr;
}