#include <stdio.h>

int main()
{
    float m, cm;
    printf("enter meter");
    scanf("%f", &m);
    cm = m * 100;
    printf("the centimeter is %.2f", cm);

    return 0;
}