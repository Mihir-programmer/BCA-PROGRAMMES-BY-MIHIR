#include <stdio.h>

int main()
{
    int i, a, primeflag = 0, b, j;
    printf("enter  the one number\n");
    scanf("%d", &a);
    printf("enter  the second number\n");
    scanf("%d", &b);
    for (i = a; i <= b; i++)
    {
        primeflag = 0;
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                primeflag = 1;
                break;
            }
        }
        if (primeflag == 0)
            printf("%d is a prime  number\n", i);
        else
            printf("%d is not a prime number\n", i);
    }
    return 0;
}