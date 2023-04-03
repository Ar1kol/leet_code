#include <stdio.h>

void moveZeroes(int *nums, int numsSize);

int main(int argc, char const *argv[])
{
    int nums[] = {0,1,0,3,12};
    int size = sizeof(nums) / sizeof(nums[0]);
    moveZeroes(nums, size);
    for (int i = 0; i < size; i++)
    {
        printf("%i ", nums[i]);
    }
    printf("\n");

    return 0;
}

void moveZeroes(int *nums, int numsSize)
{
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }
    while (j < numsSize) {
        nums[j++] = 0;
    }
}

