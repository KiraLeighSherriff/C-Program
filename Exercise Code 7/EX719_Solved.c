#include <stdio.h>

#define SIZE 100

int main(void)
{
    int i, max_1, max_2, arr[SIZE];
    
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    max_1 = max_2 = arr[0];

    for(i = 1; i < SIZE; i++)
    {
        if(max_1 != arr[i])
        {
            max_2 = arr[i]; 
            break;
        }
    }

    if(i == SIZE)
    {
        printf("Array contains the same value: %d\n", max_1);
        return 0;
    }

    for(; i < SIZE; i++)
    {
        if(arr[i] > max_1)
        {
            max_2 = max_1; 
            max_1 = arr[i];
        }
        else if(arr[i] > max_2 && arr[i] != max_1) 
            max_2 = arr[i];
        }

    printf("First_Max = %d and Sec_Max = %d\n", max_1, max_2);
return 0;
}