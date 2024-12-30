#include <stdio.h>
#define PI 3.14
int main()
{
    float r, a;
    printf("enter radius of circle\n");
    scanf("%f", &r);
    a = PI * r * r;

    printf("your area of circle is :%.2f", a);

    return 0;
}