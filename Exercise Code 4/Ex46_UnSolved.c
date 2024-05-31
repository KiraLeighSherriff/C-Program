#include <stdio.h>

//Dont know if this is right

int main(void){

    unsigned int sum , pos;

    printf("Enter number: ");
    scanf("%d", &sum);
   
    printf("%d", sum & 1 );

    return 0;
}