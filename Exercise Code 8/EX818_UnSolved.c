#include <stdio.h>
#include <stdlib.h>
/*Find the sum of the main diagonal and the Secondary diagonal and 
display the sum. Using a pointer to get the values from the array 
and add the pointer tp the sum of each of the diagonals. */ 


#define ROWS 5
#define COLS 5

int main(void){

    int array[ROWS][COLS];
    int loop_col, loop_row;
    int *Add;
    int sum_Diag_Main, sum_Diag_Sec;

    sum_Diag_Main = sum_Diag_Sec = 0;
            

    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            printf("Enter nunber for first array in row %d and colunm %d: ", loop_row, loop_col );
            scanf("%d", &array[loop_row][loop_col]);
        }
    }

    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            //getting the main diagonals.
            if(loop_row == loop_col)
            {
                //getting the value from the array and putting it into a pointer.
                Add = &array[loop_row][loop_col]; 
                sum_Diag_Main += *Add;

            }
            else if(loop_row != loop_col)
            {
                Add = &array[loop_row][loop_col];
                sum_Diag_Sec += *Add;
            }
                
        }

    }

    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            printf("%d |", array[loop_row][loop_col]);
        }
        printf("\n");
    }

    printf("\nMain diagonal sum = %d\n", sum_Diag_Main);
    printf("Secondary diagonal sum = %d\n", sum_Diag_Sec);

    return 0;
}