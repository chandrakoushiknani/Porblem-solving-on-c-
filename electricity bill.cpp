#include<stdio.h>
int main ()
{
    int units;
    float amount, surcharge, total_amount;
    printf("enter the units consumed : ");
    scanf("%d",&units);
    if(units <= 50) {
        amount = units * 3;
    }
    else if(units<=150){
        amount = 50*3+(units-150) * 4;
    }
    else if(units<=250){
        amount = 50 * 3 + 100 * 4 + (units - 150) * 4.5;
    }
    else if(units>250){
        amount = 50*3 + 100*4 + 100*4.5 + (units-250)*5;
    }
    surcharge = units * 0.20;
    total_amount = amount + surcharge;
    printf("Electricity bill = Rs.%.2f",total_amount);
    return 0;
}

