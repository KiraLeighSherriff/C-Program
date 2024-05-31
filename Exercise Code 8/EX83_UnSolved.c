#include <stdio.h>
// Dislpaying the fractional part of a number from a pointer. 

int main(void){

    double *ptr, num; 

    printf("Enter number: ");
    scanf("%lf", &num); 

    ptr = &num; 
    *ptr -= (int)num; 

    printf("%.2lf", *ptr);

    return 0;
}