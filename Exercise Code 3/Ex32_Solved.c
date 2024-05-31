#include<stdio.h>

int main(void){

    int i , j;

    printf("Eneter to intagers: "); 
    scanf("%d %d", &j, &i);
    printf("Sum = %d, Product = %d, Difference = %d, Division = %lf", i+j, i*j, i-j, (double)i/j);


    return 0;
}