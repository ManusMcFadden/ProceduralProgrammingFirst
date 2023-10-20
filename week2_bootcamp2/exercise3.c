#include <stdio.h>
int main()
{
    int array [] = {1,2,3,4,5};
    int i = 0, max = 0;
    for(i = 0; i <= 5; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    printf("%d", max);
}