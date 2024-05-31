#include <stdio.h> 
// Frocing the user to put the number in some decending order

int main(void){


    int num1, num2, num3; 
    int *ptr1, *ptr2, *ptr3;

    do{


        ptr1 = &num1;
        ptr2 = &num2;
        ptr3 = &num3;

        printf("Enter number 1: ");
        scanf("%d", &num1);

        printf("Enter number 2: ");
        scanf("%d", &num2);

        printf("Enter number 3: ");
        scanf("%d", &num3);

    
    }while((*ptr1 < *ptr2) && (*ptr2 < *ptr3) && (*ptr1 < *ptr3));



    return 0;
}