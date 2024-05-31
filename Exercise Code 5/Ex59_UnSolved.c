#include<stdio.h>
//To work out how much water cost 


int main(void){

    double amount, cost, over;

    printf("Emter amount of water(cubic meter): ");
    scanf("%lf", &amount);

    if(amount >= 60)
    {
        over = amount - 60;
        amount = (over * 1.2) + (10 * 1) + (20 * 0.8) + (30 * 0.6);
        printf("%lf", amount);
        printf("e1");
    }
    else if (amount < 60 && amount > 50)
    {
        over = amount - 50;
        amount = (over * 1) + (20 * 0.8) + (30 * 0.6) -10 ;
        printf("%lf", amount);
        printf("e2");
    }
    else if (amount <= 50 && amount > 30)
    {
        over = amount - 30;
        amount = over * 0.6 + 10;
        printf("%lf", amount);
    }
    else if(amount <= 30)
    {
        amount = 10;
        printf("%lf", amount);
        printf("e5");
    }


    return 0;
}
