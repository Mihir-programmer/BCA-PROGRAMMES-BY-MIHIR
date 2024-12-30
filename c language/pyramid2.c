#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter numbers of row\n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {

            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
/*
 5
54
543
5432
54321*/