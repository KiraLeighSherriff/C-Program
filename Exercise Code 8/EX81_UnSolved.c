#include <stdio.h>

int main(void){

    double num1, num2, sum; 
    double *ptr1, *ptr2;

    printf("Enter number %d and %d: ", 1, 2); 
    scanf("%lf %lf", &num1, &num2);

    // Making ptr equal to num
    ptr1 = &num1; 
    ptr2 = &num2; 

    sum = *ptr1 + *ptr2; //adding the two number together 

    printf("%lf", sum); 

        
    return 0;
}