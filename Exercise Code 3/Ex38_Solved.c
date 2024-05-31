#include<stdio.h>

int main(void){

    int i, a;
    float b;
    double k;
   

    printf("Enter 1 float 1 intager: ");
    scanf("%lf %d", &k, &i);

    a = k/i;
    b = k/i;

    printf("%lf / %d = %0.2f\n", k, i, b);
    printf("%f", k-(a*i));
    
    return 0;
}