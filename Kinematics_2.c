#include<stdio.h>
#include<math.h>
int main ()
{
    float u,a,s,t;
    printf("Enter the intial velocity (u) : ");
    scanf("%f", & u);
    printf("Enter the time duration (t) :");
    scanf ("%f", & t);
    printf ("Enter the accileretion of the object (a) :");
    scanf("%f", & a);
    s = u * t +( ( a * t * t)/2 );
    printf("The distance covered in : %f", s );
    return (0);
}