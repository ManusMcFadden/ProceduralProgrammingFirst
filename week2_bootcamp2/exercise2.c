#include <stdio.h>
int main()
{
    int array [] = {1,2,3,4,5};
    int i = 0;
    for(i = 4; i>=0; i--)
    {
        printf("%d", array[i]);
    }
}