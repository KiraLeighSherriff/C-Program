#include <stdio.h>

int main(void){

    int i, k, f_half, l_half;

    printf("Enter a 4 digit number and a 1 digit number: ");
    scanf("%d%d", &i , &k);

    f_half = i/100;// To get the first half of the number 

    l_half = i%100;// To get the last half

    printf("The number will be %d%d%d", f_half, k, l_half);


    return 0;
}