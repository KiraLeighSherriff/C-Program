#include <stdio.h>

#define size 100

int main(void){

    int num[size], i, j, last;

    for(i = 0; i < size; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &num[i]);
        
    }    

    last = num[size-1];

    for(j = size-1; j > 0; j--)
    {       
        num[j] = num[j-1];    
    }   

    num[0] = last; 

    for(i = 0; i < size; i++)
        printf("Enter %d is %d\n", i, num[i]);


    return 0;
}