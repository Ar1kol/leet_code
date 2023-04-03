from typing import List
class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        res = [[1],[1, 1]]
        if rowIndex:
            for i in range(2, rowIndex + 1):
                res.append([])
                res[i].append(1)
                for j in range(1, i):
                    res[i].append(res[i - 1][j - 1] + res[i - 1][j])  
                if(rowIndex != 0):  
                    res[i].append(1)  
            return res[rowIndex]
        return [1]


test = Solution()

print(test.getRow(5))