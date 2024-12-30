#include <stdio.h>

int main()
{
    int a, temp, rev = 0, rem = 0;
    printf("enter value of a\n");
    scanf("%d", &a);
    temp = a;
    while (a != 0)
    {
        rem = a % 10;
        rev = (rev * 10) + rem;
        a = a / 10;
    }
    printf("the reverse is %d\n", rev);
    if (temp == rev)
        printf("palindrom");
    else
        printf("not palindrom");

    return 0;
}