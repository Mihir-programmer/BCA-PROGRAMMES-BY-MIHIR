#include<stdio.h>
int main()
{
    char a;
    int c,b;
    printf("A OR a or + for addition\n");
    printf("M OR m or * for addition\n");
    printf("S OR s or  for addition\n");
    printf("D OR d or / for addition\n");
    printf("S OR s or %  .=for addition\n");
    printf("enter your choice\n");
    sacnf("%c",&a);
    printf("enter 2 number\n");
     scanf("%d %d",&b,&c);
    switch(a)
    {
        case 'A':case 'a':case '+':
        printf("the addition is %d",b+c);
        break;
         
        case 'S':case 's':case '-':
        printf("the asubtraction is %d",b-c);
        break;

        case 'M':case 'm':case '*':
        printf("the multiplication is %d",b*c);
        break;

        case 'D':case 'd':case '/':
        printf("the addition is %.2f",b/(float)c);
        break;

        case 'R':case 'r':case '%':
        printf("the addition is %d",b%c);
        break;
      
      default:
      printf("invilid character\n");
      break;






    }
}
