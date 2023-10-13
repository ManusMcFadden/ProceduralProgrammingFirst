#include <stdio.h>
int main()
{
    int array [] = {1,2,3,4,5};
    int i = 0, sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum += array[i];
    }
    printf("%d",sum);
}