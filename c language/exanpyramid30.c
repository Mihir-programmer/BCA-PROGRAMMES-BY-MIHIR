#include <stdio.h>

int main()
{
    int n, i, j, num = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num * num * num);
            num = num + 2; // Move to the next odd number
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}
