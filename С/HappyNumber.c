#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isHappy(int n);

int main(int argc, char const *argv[])
{

    bool res = isHappy(2);
    printf("%i\n", res);
    return 0;
}

bool isHappy(int n)
{
    int count = 0;
    while (n != 1 && count <= 31)
    {
        int tmp = 0;
        while (n)
        {
            tmp += pow((n % 10), 2);
            n /= 10;
        }
        n = tmp;
        count++;
    }

    if (n == 1)
    {
        return true;
    }

    return false;
}