class Solution {
    public long countFairPairs(int[] nums, int lower, int upper) {
        Arrays.sort(nums);
        return countFair(nums, upper) - countFair(nums, lower - 1);
    }

    private long countFair(int  nums[], int sum){
        int n = nums.length;
        int i = 0, j = n - 1;
        long count = 0;
        while(i < j){
            if(nums[i] + nums[j] <= sum){
                count += j - i;
                i++;
            }else{
                j--;
            }
        }
        return count;
    }
}