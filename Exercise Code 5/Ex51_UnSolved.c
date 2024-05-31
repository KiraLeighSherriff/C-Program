#include <stdio.h>
/*Cheack if the numbers are over 100*/

int main(void){

    double id1,id2,id3, cost = 0; 

    printf("Enter price of 3 products: ");
    scanf("%lf%lf%lf", &id1, &id2, &id3);

    (id1 > 100) ? ++cost : cost; 
    (id2 > 100) ? ++cost : cost; 
    (id3 > 100) ? ++cost : cost; 
    /*Cheacks if each of teh items cost over 100 if so cost will be incremnted by one*/

    printf("\n%0.lf are over 100", cost);


    return 0;
}