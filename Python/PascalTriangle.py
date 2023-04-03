from typing import List

class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows:
            res = [[1]]
            for i in range(1, numRows):
                res.append([])
                res[i].append(1)
                for j in range(1, i):
                    res[i].append(res[i - 1][j - 1] + res[i - 1][j])  
                if(numRows != 0):  
                    res[i].append(1)  
            return res
        return  []


test = Solution()

print(test.generate(5))


# a = []
# for x in range(numRows):
#     a.append([1])
# # creating the 2d array
# # appending the starting 1: [1, ...]    
#     if x > 1: 
# # skipping the first two rows 
#         for c in range(x-1):
# # for loop used to find info about previous row          
#             a[x].append(a[x-1][c]+a[x-1][c+1])
# # math for adding the c and the c+1 number from the previous row
#     if x > 0:
# # checking if its not the first row
#         a[x].append(1)
# # appending the ending 1: [1, ..., 1]
        
