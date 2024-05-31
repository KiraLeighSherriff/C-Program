#include<stdio.h>

int main(void){

    int i;

    printf("Enter a number: ");
    scanf("%d", &i);
    

    i = 10* (i % 10) + i/10;
    /*
    72 % 10 = 2
    2 * 10 = 20 

    72 / 10 = 7

    20 + 7 = 27
    */

    printf("The revers number: %d", i);

    return 0;
}