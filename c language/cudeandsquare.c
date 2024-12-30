#include <stdio.h>

int main()
{
    float a, s, c;
    printf("enter value of a\n");
    scanf("%f", &a);
    s = a * a;
    c = a * a * a;

    printf("the square is %.2f\n", s);
    printf("the cube is %.2f\n", c);
    return 0;
}