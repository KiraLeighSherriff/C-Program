#include<stdio.h>
/*IF the amount is over 100 there will be a 5% discount*/

int main(void){

    
    double tmp, tmp2, amount, total, discount, dis = 5;

    printf("Enter total cost: ");
    scanf("%lf", &amount); 

    tmp = dis / 100; 
    tmp2 = tmp * amount;
    discount = amount - tmp2;
    //take away 5% from the amount. For if it is over 100

    total = (amount < 100) ? amount : discount;
  

    printf("Total %lf", total); 

    return 0;
}