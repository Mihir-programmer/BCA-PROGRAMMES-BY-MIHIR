/*15 14 13 12 11
10 9 8 7
6 5 4
3 2
1
*/
#include <stdio.h>

int main()
{
    int i, j, n, k = 15;
    printf("enter value of n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k--);
        }
        printf("\n");
    }
    return 0;
}