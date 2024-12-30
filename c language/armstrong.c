#include <stdio.h>

int main()
{
    int a, rem = 0, sum = 0, temp;
    printf("enter a value \n");
    scanf("%d", &a);
    temp = a;
    while (a != 0)
    {

        rem = a % 10;
        sum = sum + (rem * rem * rem);
        a = a / 10;
    }
    printf("%d\n", sum);
    if (temp == sum)
        printf("armstrong");
    else
        printf("not a armstrong");
    return 0;
}