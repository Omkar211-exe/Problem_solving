#include <stdio.h>

int main(void)
{
    float a ,b ;
    printf("Enter two inputs :");
    scanf("%d %d", &a ,&b);
    float ans = ((a+b)*a)-b;
    printf ("c = %.5f",((a+b)*a)-b);
    return (0);
}