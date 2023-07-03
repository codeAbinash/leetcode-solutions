class Solution(object):
    def permute(self, nums):
        returnArr = []

        if len(nums) == 1:
            return nums[:]
        
        for i in range(len(nums)):
            num = nums.pop(0)
            perms = self.permute(nums)

            for perm in perms:
                perm.append(num)
            returnArr.extend(perms)
            nums.append(num)
        return returnArr;