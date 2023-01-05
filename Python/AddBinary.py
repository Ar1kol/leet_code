class Solution:
    def addBinary(self, a: str, b: str) -> str:
        res = int(a, 2) + int(b , 2)
        return format(res, "b")



test = Solution()

print(test.addBinary(a = "1010", b = "1011"))