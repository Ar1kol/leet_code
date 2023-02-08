#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPalindrome(int x);

int main()
{
    bool check = isPalindrome(121);

    printf("%d\n", check);

    return 0;
}

bool isPalindrome(int x)
{
    char x_string[20];

    sprintf(x_string, "%d", x);
    int len = strlen(x_string);
    int j = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        if (x_string[i] != x_string[j])
        {
            return false;
        }
        j++;
    }

    return true;
}

// bool isPalindrome(int x){

//     char x_str[12];

//     // convert to str
//     sprintf(x_str, "%d", x);

//     int i = 0, j = strlen(x_str)-1;

//     while (i < j) {
//         if (x_str[i] != x_str[j])
//             return false;
//         i++;
//         j--;
//     }
//     return true;
// }

// bool isPalindrome(int x){
// long int rev = 0;
// int temp = x;
// if(x<0)
// 	return false;

// while(x){
//     rev = rev * 10 + x % 10;
//     x /= 10;
// 	}
        
// return (temp == rev);
// }