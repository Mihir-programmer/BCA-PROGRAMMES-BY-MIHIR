#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, result;

    printf("Enter the base number (X): ");
    scanf("%f", &x);

    printf("Enter the exponent number (Y): ");
    scanf("%f", &y);

    result = pow(x, y);

    printf("%.2f raised to the power of %.2f is %.2lf\n", x, y, result);

    return 0;
}
