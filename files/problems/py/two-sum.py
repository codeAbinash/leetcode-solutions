def twoSum(self, nums, target):
    values = {}
    for idx, value in enumerate(nums):
        if target - value in values:
            return [values[target - value], idx]
        else:
            values[value] = idx