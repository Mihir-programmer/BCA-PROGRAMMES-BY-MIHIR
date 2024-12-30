#include <stdio.h>

int main()
{
    float a, s, m, c;
    printf("enter marks of s");
    scanf("%f", &s);
    printf("enter marks of m\n");
    scanf("%f", &m);

    printf("enter marks of c\n");
    scanf("%f", &c);

    a = ((s + m + c) * 100) / 300;

    printf("The average marks of three subjects is:%.2f", a);

    return 0;
}