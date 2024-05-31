#include <stdio.h>

#define ROWS 3
#define COLS 3  

int main(void){

    int arr[ROWS] [COLS], i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("Enter number for Row %d and Column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("| %d |", arr[i][j]);
        }
        printf("\n");
    }

    if((arr[1][0] == 0) && (arr[2][0] == 0) && (arr[2][1] == 0))
    {
        printf("The Triangular it Upper!\n");
    }
    else if((arr[0][1] == 0) && (arr[0][2] == 0) && (arr[1][2] == 0))
    {
        printf("The Triangular it Lower!\n");
    }
    else if((arr[0][0] == 0) && (arr[1][1] == 0) && (arr[2][2] == 0))
    {
        printf("The Triangular it Diagonal!\n");
    }
    
    else
    {
        printf("No Triangular!\n");
    }


    return 0;
}