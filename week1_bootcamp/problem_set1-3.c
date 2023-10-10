#include <stdio.h>

int main()
{

int intsize;
float floatsize;
char charsize;
double doublesize;

printf("The max size of an integer is %zu\n", sizeof(intsize));
printf("The max size of a float is %zu\n", sizeof(floatsize));
printf("The max size of a character is %zu\n", sizeof(charsize));
printf("The max size of a double is %zu\n", sizeof(doublesize));
return 0;

}