class Solution:
    def isValid(self, s: str) -> bool:
        # characters  = ["()","[]","{}"]
        # if len(s) % 2 != 0:
        #     return False
        # for i in range(0, 2, len(s)):
        #     if s[i] + s[i+1] not in characters:
        #         return False
        # return True

        stack = []
        characters  = {
            "(":")",
            "[":"]",
            "{":"}"
        }

        for c in s:
            if c in characters.keys():
                stack.append(characters[c])
            elif not stack or stack[-1] != c:
                return False
            else:
                 stack.pop()
        return len(stack) == 0

test = Solution()

print(test.isValid("()[]{}"))