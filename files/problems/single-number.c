int singleNumber(int* nums, int n) {
    int res = nums[0];
    for (int i = 1; i < n; i++) res ^= nums[i];
    return res;
}