#include <stdio.h>

#define size 100 

int main(void){

    int arr[size], i, j;
    j = 0;

    for(i = 0; i < size; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &arr[i]);

        j = i - 1;

        if(j == -1) // j will equal -1 so the user will only be able to enter a nunber less then -1 in frist run through of the code
            j = 100; // this part of the code fixes that and makes sure the user can enter any number that they want

        if(arr[i] > arr[j])//If the number i is less then number j. Checnking if the new number added is larger than the old number.
        {
            while(arr[i] > arr[j])
            {
                printf("Make sure the number is smaller then the last input!!\n");
                printf("Enter %d number: ", i);
                scanf("%d", &arr[i]);
            }
        }
    }    

    return 0;
}