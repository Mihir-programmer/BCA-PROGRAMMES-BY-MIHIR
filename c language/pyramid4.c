#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*
12345
2345
345
45
5
*/