#include <stdio.h>

int main()
{
    float billamount, disc, finalbillamount;
    printf("enter your billamout\n");
    scanf("%f", &billamount);
    if (billamount > 5000)
        disc = (billamount * 10) / 100;

    finalbillamount = billamount - disc;
    printf("The final billamount is %.2f", finalbillamount);
    return 0;
}