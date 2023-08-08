# by @codeAbinash
# Time : O(n)
# Space : O(1)

class Solution:
    def xorOperation(self, n: int, start: int) -> int:
      res = start;
      for i in range(1,n):
         res ^= start + 2*i
      return res