# by @codeAbinash
# Time : O(n)
# Space : O(n)

import functools


class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        r_sum = functools.reduce(lambda a, b: a + b, nums)
        l_sum = 0
        result = []
        for i in range(len(nums)):
            r_sum -= nums[i]
            result.append(abs(l_sum - r_sum))
            l_sum += nums[i]
        return result
