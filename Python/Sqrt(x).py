class Solution:
    def mySqrt(self, x: int) -> int:

        # for i in range(x):
        #     x += 1

        b = 0
        while(b * b < x):
            b += 1
        if b * b > x:
            return b - 1
        return b


test = Solution()

print(test.mySqrt(4))