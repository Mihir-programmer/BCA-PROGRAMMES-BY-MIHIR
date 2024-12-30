#include <stdio.h>

int main()
{
    float pi = 3.14, r, c;
    printf("enter radius of circle\n");
    scanf("%f", &r);
    c = 2 * pi * r;

    printf("the circumtance of circle is %.2f", c);
    return 0;
}