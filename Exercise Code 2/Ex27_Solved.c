#include <stdio.h>

int main(void){

    float i = 3.45;
    float j = 6.78; 

    printf("%.2f , %.2f \n", i,j);
    

    float tmp; 
    int k;

    tmp = i - (int)i;
    k = (int)i; 
    i = (int)j + tmp; 

    tmp = j - (int)j;
    j = k + tmp; 
    
    printf("%.2f , %.2f \n", i , j);

    return 0;

}