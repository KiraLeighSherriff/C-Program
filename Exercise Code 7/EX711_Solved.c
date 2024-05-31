#include<stdio.h>

#define size 5

int main(void){

    int i, j, pos, cnt;
    int arr1[size], arr2[size];

    for(i = 0; i < size; i++)
    {
        printf("Enter %d number for array 1: ", i);
        scanf("%d", &arr1[i]);

        printf("Enter %d number for array 2: ", i);
        scanf("%d", &arr2);
    }

    for(i = 0; i < size; i++)
    {
            for(j = 0; j < size; j++)
            {
                if(arr1[i] == arr2[j])
                {
                    cnt++;
                    printf("Common = %d (Pos_1 = %d Pos_2 = %d)\n", arr1[i], i, j);
                }
            }
    }

    if(cnt == 0)
        printf("\nNo Macthing Numbers!");

    return 0;
}