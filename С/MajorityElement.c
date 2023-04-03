#include <stdio.h>

int majorityElement(int *nums, int numsSize);

int main(int argc, char const *argv[])
{
    int nums[] = {0, 1, 0, 3, 12};
    int size = sizeof(nums) / sizeof(nums[0]);
    int res = majorityElement(nums, size);
    printf("%i\n", res);

    return 0;
}

int majorityElement(int *nums, int numsSize)
{
    int count = 0, candidate = nums[0];
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                candidate = nums[i + 1];
            }
        }
    }
    return candidate;
}