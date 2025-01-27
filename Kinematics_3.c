#include<stdio.h>
#include <math.h>
int main ()
{
    float v,u,a,s,x;
    printf("Enter the intial velocity :");
    scanf("%f", & v);
    printf("Enter the distance covered by the object :");
    scanf("%f", &s);
    printf("Enter the accelaration of the object :");
    scanf ("%f", &a);
    x = u * u + 2 * a * s;
    v = pow(x,1/2);
    printf("The final velocity of the object is : %f", v);
    return(0);
}