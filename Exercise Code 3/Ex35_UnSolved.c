#include <stdio.h>

/*To calulate how much a plate or cup cost with the user sperfic input amount they want to buy*/

int main(void){

    double plates = 0.89, cups = 0.56, total, no_plates, no_cups;
    // The prices of the cups and plates
    printf("How many plates: ");
    scanf("%lf", &no_plates);

    printf("How many cups: ");
    scanf("%lf", &no_cups);

    total = (cups * no_cups) + (plates * no_plates);
    //mutiple the cups with the price and adding with the plates to get the total 

    printf("Total amount = %.2lf", total);

    return 0;
}