int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int i = 0, j = numbersSize - 1;
    int *returnArr = (int *)malloc(sizeof(int) * 2);
    *returnSize = 2;
    while (i < j) {
        if (numbers[i] + numbers[j] == target){
            i++;j++;
            break;
        }
        if (numbers[i] > target || numbers[i] + numbers[j] > target)
            j--;
        else
            i++;
    }
    returnArr[0] = i;
    returnArr[1] = j;
    return returnArr;
}