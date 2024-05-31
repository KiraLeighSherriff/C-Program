#include <stdio.h>

#define ROWS 3
#define COLS 5

int main(void){

    int array[ROWS][COLS], loop_rows, loop_cols; 
    int cols_str1, cols_str2, cols_str3, cols_str4, cols_str5;
    int tmp1, tmp2, tmp3, tmp4, tmp5; 
    int a1, a2, a3, a4, a5; // for printing out colunm latter 
    
    a1 = a2 = a3 =a4 = a5 = 0;

    for(loop_rows = 0; loop_rows < ROWS; loop_rows++)
    {
        for(loop_cols = 0; loop_cols < COLS; loop_cols++)
        {
            printf("Enter number for row %d and column %d: ", loop_rows, loop_cols);
            scanf("%d", &array[loop_rows][loop_cols]);
             printf("\n");
        }
         printf("\n");
    }


    if((array[0][0] != array[1][0]) || (array[0][0] != array[2][0]) || (array[1][0] != array[2][0]))
    {
        for(loop_rows = 0; loop_rows < ROWS; loop_rows++)
            {
            for(loop_cols = 0; loop_cols < 1; loop_cols++)
                printf("| %d   |", array[loop_rows][loop_cols]);
                 printf("\n");
            }
        printf("\n");
    }


     if((array[0][1] != array[1][1]) || (array[0][1] != array[2][1]) || (array[1][1] != array[2][1]))
    {
        for(loop_rows = 0; loop_rows < ROWS; loop_rows++)
            {
            for(loop_cols = 1; loop_cols < 2; loop_cols++)
                printf("| %d |", array[loop_rows][loop_cols]);
                 printf("\n");
            }
             printf("\n");
    }


     if((array[0][2] != array[1][2]) || (array[0][2] != array[2][2]) || (array[1][2] != array[2][2]))
    {
        for(loop_rows = 0; loop_rows < ROWS; loop_rows++)
            {
            for(loop_cols = 2; loop_cols < 3; loop_cols++)
                printf("| %d |", array[loop_rows][loop_cols]);
                 printf("\n");
            }
             printf("\n");
    }


     if((array[0][3] != array[1][2]) || (array[0][3] != array[2][3]) || (array[1][3] != array[2][3]))
    {
        for(loop_rows = 0; loop_rows < ROWS; loop_rows++)
            {
            for(loop_cols = 3; loop_cols < 4; loop_cols++)
                printf("| %d |", array[loop_rows][loop_cols]);
                 printf("\n");
            }
             printf("\n");
    }


     if((array[0][4] != array[1][4]) || (array[0][4] != array[2][4]) || (array[1][4] != array[2][4]))
    {
        for(loop_rows = 0; loop_rows < ROWS; loop_rows++)
            {
            for(loop_cols = 4; loop_cols < 5; loop_cols++)
                printf("| %d |", array[loop_rows][loop_cols]);
                 printf("\n");
            }

    }  
        
    return 0;
}