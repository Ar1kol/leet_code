class Solution:
    def isValid(self, s: str) -> bool:
        characters  = ["()","[]","{}"]
        if len(s) % 2 != 0:
            return False
        for i in range(0, 2, len(s)):
            if s[i] + s[i+1] not in characters:
                return False
        return True


test = Solution()

print(test.isValid("()[]{}"))