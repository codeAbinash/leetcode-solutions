class Solution {
    public int countTriplets(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            int xor = 0;
            for (int j = i; j < nums.length; j++) {
                xor ^= nums[j];
                if (xor == 0)
                    count += (j - i);
            }
        }
        return count;
    }
}