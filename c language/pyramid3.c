#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter number of rows");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // 1<=5
    {
        for (j = n; j >= i; j--) // 5 to j>=1(i)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*
54321
5432
543
54
5
*/