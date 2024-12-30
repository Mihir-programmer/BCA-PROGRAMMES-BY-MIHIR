/*
1
10
101
1010
10101*/

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    return 0;
}