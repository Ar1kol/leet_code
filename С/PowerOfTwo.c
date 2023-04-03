#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n);
bool isPowerOfTwo2(int n);

int main(int argc, char const *argv[])
{
    int res = isPowerOfTwo(10);
    printf("%i\n", res);
    return 0;
}

bool isPowerOfTwo(int n)
{

    if (n == 1)
    {
        return true;
    }

    if (n % 2 != 0)
    {
        return false;
    }

    while (n > 2)
    {
        if (n % 2 != 0)
        {
            return false;
        }

        n /= 2;
    }

    if (n == 2)
    {
        return true;
    }

    return false;
}

bool isPowerOfTwo2(int n)
{
    if (n == 0)
        return false;

    else if (n == 1)
        return true;

    else if (n % 2 != 0)
        return false;

    else
        return isPowerOfTwo2(n / 2);
}