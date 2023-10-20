#include <stdio.h>

int main() 
{

    float side1;
    float side2;
    float area;
    printf("Enter the length of side 1:");
    scanf("%f",&side1);
    printf("Enter the length of side 2:");
    scanf("%f",&side2);
    area = side1 * side2;
    printf ("The area of rectangle sides %f and %f is %f\n", side1 , side2, area);
    return 0;

}