#include <stdio.h>

int main(void){

    float tax, income; 

    printf("Enter income: ");
    scanf("%f", &income); 

    if(income <= 12000 )
        tax = 0; 
    else if(income <= 14000)
        tax = (income - 12000) * 0.15;
    else if(income <= 30000)
        tax = (2000 * 0.15) + (income - 30000) * 0.3;
    else 
        tax = (2000 * 015) + (16000 * 0.3) + (income - 30000) * 0.4;

    printf("Tax = %.2f", tax);

    return 0;
}