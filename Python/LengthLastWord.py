class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        list_s = (s.split(" "))
        for i in range( len(list_s) - 1, -1, -1):
            if list_s[i]:
                return len(list_s[i])


test = Solution()

print(test.lengthOfLastWord(s = "   fly me   to   the moon  "))