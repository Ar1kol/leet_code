#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main()
{
    return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *nums_indexes=malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                nums_indexes[0] = i;
                nums_indexes[1] = j;
                break;
            }
        }
    }
    free(nums_indexes);
    return nums_indexes;
}



// int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//     int* ans = (int*)malloc(2*sizeof(int));
//     for(int i = 0; i< numsSize; i++) {
//         for(int j =i+1 ; j<numsSize; j++) {
//             if(nums[j] + nums[i] == target){
//                 ans[0]=i;
//                 ans[1]=j;
//                 *returnSize = 2;
//                 return ans;
//             }
//         }
//     }
//     *returnSize = 0;
//     return ans;
// }

// int *returnarr=(int*)malloc(2*(sizeof(int)));
// for(int i=0;i<numsSize;i++)
// {
//     for(int j=i+1;j<numsSize;j++)
//     {
//         if(nums[i]+nums[j]==target)
//         {
//             returnarr[0]=i;
//             returnarr[1]=j;
//         }
//     }
// }
// for(int i=0;i<2;i++)
// {
//     printf("%d",returnarr[i]);
// }
// return returnarr;


// #include<stdio.h>
// #include<stdlib.h>
// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */

// int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//     *returnSize = 2;
//     int *ans = (int *)malloc((sizeof(int)) * 2);
//     for(int i = 0; i < numsSize; i++){
//         int temp = target - nums[i];
//         for(int j = i + 1; j < numsSize; j++){
//             if(*(nums + j) == temp){
//                 *ans = i;
//                 *(ans + 1) = j;
//                 break;
//             }
            
//         }
//     }
//     return ans;
// }