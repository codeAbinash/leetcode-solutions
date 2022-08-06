void revArray(int *a, int *b) {
    while (a < b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
        a++;
        b--;
    }
}
void printArray(int *arr, int len){
    int i;
    for(i = 0;i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k == 0) return;
    revArray(&nums[0], &nums[numsSize - 1]);
    revArray(&nums[0], &nums[k - 1]);
    revArray(&nums[k], &nums[numsSize - 1]);
}