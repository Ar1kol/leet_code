#include <stdio.h>
#include <stdbool.h>

bool isUgly(int n);

int main(int argc, char const *argv[])
{
    int num = 6;
    bool res = isUgly(num);
    printf("%i\n", res);

    return 0;
}

bool isUgly(int n)
{

    while (n > 1)
    {
        if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
        {
            if (n % 2 == 0)
            {
                n /= 2;
            }
            if (n % 3 == 0)
            {
                n /= 3;
            }
            if (n % 5 == 0)
            {
                n /= 5;
            }
        }
        else return false;
    }
    if (n != 1)
    {
        return false;
    }
    else return true;
    
}