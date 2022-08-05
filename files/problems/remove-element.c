void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int removeElement(int* nums, int numsSize, int val){
    int i = 0, j = numsSize - 1;
    while (i <= j){
        if (nums[i] == val)
            swap(nums + i , nums + j--);
        else
            i++;
    }
    return j + 1;
}