#include<stdio.h>
int main()
{
    int unit,charge;
    printf("enter the units");
    scanf("%d",&unit);
    
    if(unit>0 && unit<=100)
    {
    charge=unit*0.6+50;
    }
    else if(unit>100 && unit<=200)
    {
    charge=100*0.6+(unit-100)*0.8+50;
    }
    else if(unit>300)
    {
    charge=100*0.6+200*0.8+(unit-300)*0.9+50;
    }
    if(charge>300)
    charge=charge*1.15;
    printf("charge is :%d",charge);

}