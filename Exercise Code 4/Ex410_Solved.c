#include<stdio.h>

int main(void){

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if((num & 1) == 1)

        printf("%d is odd", num);

    else

        printf("%d is even", num);


    return 0;
}