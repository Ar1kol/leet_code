#include <stdio.h>

int singleNumber(int *nums, int numsSize);

int main(int argc, char const *argv[])
{
    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 8 };
    int size = sizeof(nums) / sizeof(nums[0]);
    int res = singleNumber(nums, size);
    printf("%i\n", res);

    return 0;
}

int singleNumber(int *nums, int numsSize)
{
    int unique = nums[0];
    for (int i = 1; i < numsSize; i++) {
        unique = unique ^ nums[i];
    }
    return unique;
}