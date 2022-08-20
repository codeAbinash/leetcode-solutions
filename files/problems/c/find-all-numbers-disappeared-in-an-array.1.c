// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(n)

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int count = 0, i, index = 0;
    int *missing = malloc(numsSize * sizeof(int));
    int *newArr = calloc(numsSize, sizeof(int));

    for(i = 0; i < numsSize; i++)
        if(nums[i] > 0)
            newArr[nums[i] - 1]++;
    
    for(i = 0; i < numsSize; i++)
        if(newArr[i] == 0){
            count++;
            missing[index++] = i + 1;
        }
    *returnSize = count;
    return missing;
}