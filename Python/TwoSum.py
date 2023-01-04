class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        res = []
        for i in range(len(nums)):
            new_nums = nums[i + 1:]
            num = nums[i]
            for j in range(len(new_nums)):
                if num + new_nums[j] == target:
                    res.append(i)
                    res.append(i + j + 1)
                    return res

test = Solution()

print(test.twoSum([3,3], 6))