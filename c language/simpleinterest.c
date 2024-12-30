#include <stdio.h>

int main()
{
    float si, totala, p, r, n;
    printf("enter your price\n");
    scanf("%f", &p);
    printf("enter your rate\n");
    scanf("%f", &r);
    printf("enter time period\n");
    scanf("%f", &n);

    si = p * r * n / 100;
    totala = si + p;
    printf("your simple interest is %.2f", si);
    printf("your total amount is %.2f", totala);

    return 0;
}