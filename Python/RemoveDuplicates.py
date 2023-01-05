from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        nums_set = set(nums)
        nums[:] = sorted(nums_set)
        print(nums)

        return len(nums)

test = Solution()

print(test.removeDuplicates(nums = [0,0,1,1,1,2,2,3,3,4]))