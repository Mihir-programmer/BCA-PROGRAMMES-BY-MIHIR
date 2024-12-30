/*
A
BC
DEF
GHIJ
KLMNO*/

#include <stdio.h>

int main()
{
    int i, j, k = 65, n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", k++);
        }
        printf("\n");
    }
    return 0;
}