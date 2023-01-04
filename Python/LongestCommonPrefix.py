class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        min_length = len(min(strs, key=len))
        text = ("").join(map(lambda s: s[:min_length], strs))
        res = ""
        if min_length:
            for i in range(min_length):
                letters = []
                for j in range(i, len(text), min_length):
                    if len(letters) == 0 or text[j] in letters:
                        letters.append(text[j])
                    if len(letters) == len(strs):
                        res += text[j]
                    if len(letters) != 0 and text[j] not in letters:
                        return res
        return res


test = Solution()

print(test.longestCommonPrefix(["flower","flower","flower","flower"]))


def longest(self, strs):
    if not strs:
        return ""
    shortest = min(strs,key=len)
    for i, ch in enumerate(shortest):
        for other in strs:
            if other[i] != ch:
                return shortest[:i]
    return shortest 
