#include <stdio.h>

/* To get the smallist number out of the two*/

int main(void){

    unsigned int num, num2, low; 

    printf("Enter two number: ");
    scanf("%d%d", &num ,&num2);



    low = (num < num2) ? num : num2;
     /*(condition) ? value_if_true : value_if_false

   Short if statement called Ternary Operator
    (num < num2) This checks if num is less them num2
        If num is less than num2 it will take the value of num in the seconds statement the true_value
        If num id more than num2 it will take the value of num2 in the seconds statement the false_value
        low will tack the value of bases upon the correct statment and display the smallist number
    */



   printf("%d is the smallist number ", low);
    

    return 0;
}