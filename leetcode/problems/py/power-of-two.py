# by @codeAbinash
# Time : O(1)
# Space : O(1)

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
      return n > 0 and (n & n - 1) === 0