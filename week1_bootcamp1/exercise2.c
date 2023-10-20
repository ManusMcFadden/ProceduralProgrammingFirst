#include <stdio.h>
#include <string.h>

int main() 
{

    char name[15];
    char eman[15];
    printf("Hello, please enter your name:");
    scanf("%s", &name);
    strrev(name, &eman);
    printf("Your name backwards is %s\n", eman);
    return 0;

}