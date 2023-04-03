#include <stdio.h>


int addDigits(int num);

int main(int argc, char const *argv[])
{
    int num = 38;
    int res = addDigits(num);
    printf("%i\n", res);
    return 0;
}


int addDigits(int num){

    while (num > 9)
    {
        int tmp = 0;
        while (num)
        {
            tmp += num % 10;
            num /= 10;
        }
        num = tmp;
    }

    return num;
    
}