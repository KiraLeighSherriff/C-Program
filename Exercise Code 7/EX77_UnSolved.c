#include <stdio.h>

#define size 100

int main(void){

    double num[size], min, sum;
    int i, k;

    min = 100;

    for(i = 0; i < size; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%lf", &num[i]);
    }   

    for(k = 1; k < size;)
    {
        sum = num[k-1] - num[k];
        k += 2;
    }
   
    if(sum < min)
        min = sum;
        
    
    printf("The minimum difference is %lf\n", min); 

    return 0;
}