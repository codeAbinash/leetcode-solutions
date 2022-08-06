int max(int a, int b){
    return a > b ? a : b;
}

int rob(int* nums, int numsSize){
    int rob1 = 0 , rob2 = 0, tmp;
    for(int i = 0; i < numsSize; i++) {
        tmp = max(nums[i] + rob1, rob2);
        rob1 = rob2;
        rob2 = tmp;
    }
    return rob2;
}