#include <stdio.h>

int main()
{
    float a, b;
    printf("enter the vale of a\n");
    scanf("%f", &a);

    printf("enter the vale of b\n");
    scanf("%f", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("A swaped value of a is %.2f\n", a);
    printf("A swaped vale of b is %.2f\n", b);
    return 0;
}