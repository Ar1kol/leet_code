#include <stdio.h>

int missingNumber(int *nums, int numsSize);

int main(int argc, char const *argv[])
{
    int nums[] = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
    int size = sizeof(nums) / sizeof(nums[0]);
    int res = missingNumber(nums, size);
    printf("%i\n", res);
    return 0;
}

int missingNumber(int *nums, int numsSize)
{
    int range = 0;
    for (int i = 0; i <= numsSize; i++)
    {
        range += i;
    }
    
    int sum_array = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum_array += nums[i];
    }
    
    return range - sum_array;
}