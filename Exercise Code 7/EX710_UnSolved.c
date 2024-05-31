#include <stdio.h>

#define ROWS 3
#define COLS 4

int main(void){

    int arr[ROWS][COLS], i, k, sum;
    sum = 0;

    for(i = 0;i < ROWS;i++)
    {
        for(k = 0; k < COLS;k++)
        {
            printf("Enter number for Row %d and Column %d: ", i, k);
            scanf("%d", &arr[i][k]);
        }
    }

    for(i = 0;i < ROWS;i++)
    {
        for(k = 0; k < COLS;k++)
        {
            sum += arr[i][k];
        }
    }

    printf("%d", sum);

    return 0;
}