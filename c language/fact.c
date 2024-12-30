#include <stdio.h>

int main()
{
    int a, i, fact = 1;
    printf("enter value of a\n");
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);
    return 0;
}