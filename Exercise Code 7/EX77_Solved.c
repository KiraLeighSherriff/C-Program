#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define size 10

int main(void){

    int arr[size], i, avg, total;
    total = 0; 

    srand(time(NULL));
    for(i = 0; i < size; i++)
    {
        arr[i] = rand();
        printf("%d\n", arr[i]);
        
        total += arr[i];
        
    }
    
    printf("\nAverage = %d", total/size);

    return 0;
}