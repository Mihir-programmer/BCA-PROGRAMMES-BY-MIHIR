#include <stdio.h>

int main()
{
    int a = 0, b = 1, n, c, i;
    printf("enter numbers\n");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}