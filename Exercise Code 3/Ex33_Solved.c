#include<stdio.h>
 
int main(void){

    float i, k, u, avg; 

    printf("Enter three numebrs: "); 
    scanf("%f %f %f", &i, &k, &u);
    avg = (i+k+u)/3;

    printf("The average of %f, %f, %f = %f", i, k, u, avg);
    return 0;
}