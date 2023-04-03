#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *addBinary(char *a, char *b);

int main(int argc, char const *argv[])
{
    char *str_1 = "1010";
    char *str_2 = "1011";
    char *res = addBinary(str_1, str_2);
    printf("%s\n", res);
    free(res);
    return 0;
}

char *addBinary(char *a, char *b)
{
    int sizeA = strlen(a);
    int sizeB = strlen(b);
    int sizeOutput = (sizeA > sizeB ? sizeA : sizeB) + 1;
    char *output = (char *)malloc(sizeOutput + 1);
    int sum = 0;

    output[sizeOutput] = '\0';

    while (sizeA > 0 || sizeB > 0 || sum > 0)
    {

        if (sizeA > 0)
        {
            sum += a[--sizeA] - '0';
            printf("sum - %i, sizeA - %i\n", sum, sizeA);
        }
        if (sizeB > 0)
        {
            sum += b[--sizeB] - '0';
            printf("sum - %i, sizeB - %i\n", sum, sizeB);
        }
        output[--sizeOutput] = sum % 2 + '0';
        sum /= 2;
        printf("output - %s\n", output);
        printf("sum - %i, sizeOutput - %i\n", sum, sizeOutput);
    }
    return output + sizeOutput;
}

