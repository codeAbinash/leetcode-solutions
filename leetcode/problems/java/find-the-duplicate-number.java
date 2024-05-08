class Solution {
  public int findDuplicate(int[] nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Find the intersection point of the two runners.
    while (true) {
      slow = nums[slow];
      fast = nums[nums[fast]];
      if (slow == fast)
        break;
    }

    // Find the "entrance" to the cycle.
    int slow2 = nums[0];
    while (slow2 != slow) {
      slow = nums[slow];
      slow2 = nums[slow2];
    }

    return slow;

  }
}