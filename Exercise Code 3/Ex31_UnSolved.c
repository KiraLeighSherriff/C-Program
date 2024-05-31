#include<stdio.h>

/*Adding three float numbers together*/

int main(void){

    float i;

    printf("Etner a float number: ");
    scanf("%f", &i); 

    printf("The tiple of %f is %f", i, i+i+i);


    return 0;
}