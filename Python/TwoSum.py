class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        res = []
        for i in range(len(nums)):
            new_nums = nums[i + 1:]
            num = nums[i]
            print(new_nums)
            print(num)


test = Solution()

print(test.twoSum([2,7,11,15], 9))