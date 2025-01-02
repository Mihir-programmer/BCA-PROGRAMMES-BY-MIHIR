// wap to print string using 2d array
#include <stdio.h>

int main()
{

    char a[50], b[50], c[50], d[50], z;
    int length = 0, i, j, flag = 0, k;
    printf("enter first string\n");
    gets(a);
    printf("enter first string\n");
    gets(c);

    do
    {
        printf("1.string length\n");
        printf("2.copied string\n");
        printf("3.string compare\n");
        printf("4.string reverse\n");
        printf("5.string palindrom\n");
        printf("6.sting concetnate\n");
        printf("Enter your choice\n");
        scanf("%d", &k);

        switch (k)
        {

        case 1:
            for (i = 0; a[i] != '\0'; i++)
            {
                length++;
            }
            printf("The %s string's length is %d\n", a, length);
            break;

        case 2:
            for (i = 0; a[i] != '\0'; i++)
            {
                b[i] = a[i];
            }
            printf("The copied string is %s\n", b);
            break;

        case 3:
            flag = 0;
            for (i = 0; a[i] != '\0', c[i] != '\0'; i++)
            {
                if (a[i] != c[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("String are same\n");
            }
            else
                printf("Strings are different");

            break;

        case 4:
            for (i = length - 1, j = 0; i >= 0; i--, j++)
            {

                d[j] = a[i];
            }
            d[j] = '\0';
            printf("The reverse string is %s\n", d);
            break;

        case 5:
            flag = 0;
            for (i = 0; a[i] != '\0', d[i] != '\0'; i++)
            {
                if (a[i] != d[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag = 0)
            {
                printf("palindrom\n");
            }
            else
                printf("not a palindrom\n");

            break;

        case 6:
            for (i = 0; c[i] != '\0'; i++)
            {
                a[length] = c[i];
                length++;
            }
            a[length] = '\0';
            printf("The concatenate string is %s\n", a);
            break;

        default:
            printf("invilid choice\n");
            break;
        }
        printf("do u want to continue?\n");
        fflush(stdin);
        scanf("%c", &z);

    } while (z == 'y');
    return 0;
}