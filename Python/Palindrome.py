class Solution:
    def isPalindrome(self, x: int) -> bool:
        string_num = str(x)
        reverse_string=list(map(str,string_num))
        reverse_string.reverse()
        return "".join(reverse_string) == string_num

    

test = Solution()

print(test.isPalindrome(-121))