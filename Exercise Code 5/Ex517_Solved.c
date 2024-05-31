#include <stdio.h>

int main(void){

    int i; 

    printf("Enter number: ");
    scanf("%d", &i);

    (i > 0 ) ? printf("Postive") : printf("Negative");


    return 0;
}