#include <stdio.h>

int main(void){

    int num; 

    printf("Enter number: ");
    scanf("%d", &num);

    if(num >= 0)
        {
            printf("The absolute value is: %d ", num);
        }
    else 
        {
            printf("The absolute value is: %d ", -num);
        }


    return 0;
}