#include <stdio.h>

int main()
{
    int arr[10];
    int num, i, found = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to check: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Number %d is present in the array.\n", num);
    }
    else
    {
        printf("Number %d is not present in the array.\n", num);
    }

    return 0;
}
