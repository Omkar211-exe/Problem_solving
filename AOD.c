#include <stdio.h>
#include <math.h>
//cutting a circle and making a square
int main()
{
    float pi = 3.14;
    float radius;
    float circumference;
    float side;
    float area;
    printf("Entre the radius : ");
    scanf("%f", &radius);
    circumference = 2 * pi * radius;
    side = circumference / 4;
    area = side * side;
    printf("Area of the square is : %f", area);
    return(0);
}