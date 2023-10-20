#include <stdio.h>
int main()
{
    char string [6] = "Hello";
    int i = 0;
    printf("%d",string[6]);
    for(i = 5; i>=0; i--)
    {
        printf("%c",string[i]);
    }
}