#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target);

int main()
{
    int nums[4] = {1, 3, 5, 6};
    int res = searchInsert(nums, 4, 5);
    printf("%d\n", res);
    return 0;
}

int searchInsert(int *nums, int numsSize, int target)
{
    int low = 0;
    int high = numsSize - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;     
    }

    return low;
}