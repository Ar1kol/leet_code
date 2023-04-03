#include <stdio.h>

int romanToInt(char *s);

int main()
{
    char *str = "MCMXCIV";
    int res = romanToInt(str);
    printf("%d\n", res);
    return 0;
}

int value(char opcode)
{
    switch (opcode)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
    return 0;
}

int romanToInt(char *s)
{
    int total = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {

        if (value(s[i]) < value(s[i + 1]))
            total -= value(s[i]);
        else
            total += value(s[i]);
    }

    return total;
}