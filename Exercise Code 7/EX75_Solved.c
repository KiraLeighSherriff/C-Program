#include <stdio.h>

#define size 10 

int main(void){

    int arr[size], i;
    
    for(i = 0; i < size; i++)
    {
        printf("Enter %d Numbers: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size/2; i++)
        if(arr[i] != arr[size-1-i])
            {
                printf("No symmetric array");
                return 0;
            }
            
    printf("symmetric array");

    return 0;
}