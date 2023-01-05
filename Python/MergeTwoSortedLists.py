class Solution:
    def mergeTwoLists(self, list1, list2):
        list1.extend(list2)
        # for i, j in zip(list1, list2):
        #     print(i, j)
        # # for i, j in map(None, list1, list2):
        #     result.append(i)
        #     result.append(j)
        result = sorted(list1)

        return result

test = Solution()

print(test.mergeTwoLists(list1 = [1], list2 = [0]))