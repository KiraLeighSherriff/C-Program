#include <stdio.h>
// If the number inputed by the user are in successive order 

int main(void){

    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;
    

    do
    {
        printf("\bEnter number 1: ");
        scanf("%d", &num1);
        
    }while(num1 > 0);

     do
    {
        printf("\nEnter number 2: ");
        scanf("%d", &num2);
        
    }while(num2 > 0);

     do
    {
        printf("\nEnter number 3: ");
        scanf("%d", &num3);
        
    }while(num3 > 0);

    if((*ptr1 < *ptr2) && (*ptr2 < *ptr3) && (*ptr1 < *ptr3)) // To find out if the numbers inputed are in successive order
        printf("%d %d %d are in successive ascend order", *ptr1, *ptr2, *ptr3);
    else 
        printf("%d %d %d are not in successive ascend order", *ptr1, *ptr2, *ptr3);



    return 0 ;
}