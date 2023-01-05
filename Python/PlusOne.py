from typing import List

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits = ("").join(str(d) for d in digits)
        digits = str(int(digits) + 1)
        return list(map(int,digits))




test = Solution()

print(test.plusOne(digits = [1,2,3]))