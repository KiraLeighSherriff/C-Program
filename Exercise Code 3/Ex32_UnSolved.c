#include <stdio.h>

/*Dank despist with the interest rate added*/

int main(void){

    double d, a, total; 
    printf("Enter a despist amount: "); 
    scanf("%lf", &d); 

    printf("Enter ananual interset rate: ");
    scanf("%lf", &a); 

    total = d * a;

    printf("Total amount in year is: %lf", total);


    return 0; 
}