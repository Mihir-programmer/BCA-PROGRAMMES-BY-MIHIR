/*
A
1 2
B C D
3 4 5 6
E F G H I*/

#include <stdio.h>

int main()
{
    int i, j, k = 1, h = 65, n;
    printf("enter value fo n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                printf("%d ", k++);
            else
                printf("%c ", h++);
        }
        printf("\n");
    }
    return 0;
}