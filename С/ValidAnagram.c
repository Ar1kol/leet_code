#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool isAnagram(char *s, char *t);

#define SIZE 26

int main(int argc, char const *argv[])
{
    char *s1 = "abc";
    char *s2 = "aaa";

    bool res = isAnagram(s1, s2);
    printf("%i\n", res);

    return 0;
}

bool isAnagram(char *s, char *t)
{
    int s_count[SIZE] = {0}, t_count[SIZE] = {0};
    assert(s_count[10] == 0);
    assert(t_count[10] == 0);
    int i;
    
    for (i = 0; s[i] != '\0'; i++) {
        s_count[s[i] - 'a'] += 1;
    }
    
    for (i = 0; t[i] != '\0'; i++) {
        t_count[t[i] - 'a'] += 1;
    }
    
    for (i = 0; i < SIZE; i++) {
        if (s_count[i] != t_count[i])
            return false;
    }
    
    return true;
}