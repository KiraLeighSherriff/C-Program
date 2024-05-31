#include <stdio.h>

int main(void){

    int i = 20, u = 50;


    printf("The sum of %d + %d = %d\n ", i,u, i+u); 
    printf("The prduct of %d + %d = %d\n ", i,u, i*u); 
    printf("The difference of %d + %d = %d\n ", u,i, u-i);
    printf("The divided of %d + %d = %.2f\n ", u,i, (double)u/i); 
    printf("The sum divided by 2.5 of %d + %d \\ 2.5 = %.3f \n", i,u, ((double)(i+u)/2.5)); 
    printf("The remeber of %d %% %d = %d ", i,u, i%u); 

    return 0;
}