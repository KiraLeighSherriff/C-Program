#include <stdio.h>
#include <stdlib.h>
/*getting the max row and column total using a pointer  */

#define ROWS 3
#define COLS 3

int main(void){

    int array[ROWS][COLS];
    int loop_col, loop_row;
    int *Add_row, *Add_col;
    int row_total, col_total;
    int temp;
    int maxRowTotal, maxColTotal;

    row_total = col_total = 0;
    maxRowTotal = maxColTotal = 0;
    temp = 0;

    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            printf("Enter nunber for first array in row %d and colunm %d: ", loop_row, loop_col );
            scanf("%d", &array[loop_row][loop_col]);
        }
    }

    //getting the max sum of the column 
    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        temp = col_total;
        col_total = 0;
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            Add_col = &array[loop_row][loop_col];
            col_total += *Add_col;

            if(col_total > temp)
                maxColTotal = col_total;

        }
        
    }

    //resting the temp to 0 since it will still have the value of col_total
    // Dont want the col_total to be compared i wiht row_total so temp = 0
    temp = 0;

    //getting the max sum of the rows
    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        temp = row_total;
        row_total = 0;
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            Add_row = &array[loop_col][loop_row];
            row_total += *Add_row;

            if(row_total > temp)
                maxRowTotal = row_total;

        }
        
    }

    //Displayng the matrix
    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            printf("  %d  |", array[loop_row][loop_col]);
        }
        printf("\n");
    }


    // Display the sum
    printf("The max total of Column Elements in a Matrix =  %d \n", maxColTotal) ;
    printf("The max total of Column Elements in a Matrix =  %d \n", maxRowTotal) ;

    return 0;
}