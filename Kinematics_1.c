#include <stdio.h>
// First equation of kinematics 
int main ()
{
    float v,u,t,a;
    printf("Enter the inital velocity (u) :");
    scanf("%f", & u);
    printf("Enter the duration of the motion (t) :");
    scanf("%f", &t);
    printf("Enter the acceleration of the body (a) :");
    scanf("%f", &a);
    v = u + a * t ;
    printf("The final velocity (v) is : %.2f", v);
    return(0);
}