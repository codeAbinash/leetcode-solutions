// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

int numIdenticalPairs(int* nums, int numsSize) {
    int count = 0, hash[101] = {0};
    for (int i = 0; i < numsSize; i++)
        count += hash[nums[i]]++;
    return count;
}