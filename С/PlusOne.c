#include <stdio.h>
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize);

int main(int argc, char const *argv[])
{
    int digitsSize = 2;
    int digits[2] = {9, 9};
    int returnSize = 0;
    int *result = plusOne(digits, digitsSize, &returnSize);
    printf("size - %i\n", returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    return 0;
}

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    int size = 1;
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        size = size + digits[i];
        size = size / 10;
    }
    printf("\n");
    *returnSize = digitsSize + size;
    int *res = malloc((*returnSize) * sizeof(int));

    int sum = 0;
    int r = 1;
    int j = *returnSize - 1;

    for (int i = digitsSize - 1; i >= 0; i--)
    {
        sum = r + digits[i];
        r = sum / 10;
        sum = sum % 10;
        res[j--] = sum;
    }
    if (r == 1)
        res[0] = r;

    return res;
}