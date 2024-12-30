/*
O N M L K
J I H G
F E D
C D
A
*/
#include <stdio.h>

int main()
{
    int i, j, k = 79, n;
    printf("enter value of n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", k--);
        }
        printf("\n");
    }
    return 0;
}