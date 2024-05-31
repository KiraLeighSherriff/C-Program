#include<stdio.h>

int main(void){

    float i;

    printf("Enter a float: ");
    scanf("%f", &i);
    printf("%f is between %d and %d", i, (int)i , (int)i+1);

    return 0; 
}