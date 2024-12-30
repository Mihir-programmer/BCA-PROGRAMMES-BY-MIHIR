#include <stdio.h>

int main()
{
    float a;
    printf("enter a value\n");
    scanf("%f", &a);
    if (a > 0)
        printf("positive nunber");
    else if (a < 0)
        printf("negative number");
    else
        printf("nutural number");
    return 0;
}