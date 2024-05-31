#include <stdio.h>

int main(void){

    double i,k, sum;

    printf("Enter 2 numbers: ");
    scanf("%lf%lf", &i, &k); 

    if((i <= 0) && (k <= 0))
    {
        sum = i + k;
        printf("%lf", -sum);
    }
    else 
    {
        sum = i + k;
        printf("%lf", sum);
    }

    return 0;
}