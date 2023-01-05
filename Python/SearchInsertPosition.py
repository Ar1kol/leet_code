from typing import List

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target in nums:    
            return nums.index(target)
        if target < min(nums):
            return 0
        if target > max(nums):
            return len(nums)
        else:
            for i in range(len(nums)):
                if nums[i] > target:
                    return i

        # nums.append(target)
        # nums.sort()

        # return nums.index(target)


test = Solution()

print(test.searchInsert(nums = [1,3,5,6], target = 7))