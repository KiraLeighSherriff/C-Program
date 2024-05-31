/* Other question were note code*/

#include <stdio.h>

int main(void){

    float income, tax;

    printf("Enter an income: ");
    scanf("%d", &income); 

    tax = (income > 5000 && income <= 20000) * (income - 5000) * 0.15 + (income > 20000) * ((income - 20000) * 0.3 + 15.000 * 0.15);

    printf("The tax is = %2.f", tax);

    return 0;
}