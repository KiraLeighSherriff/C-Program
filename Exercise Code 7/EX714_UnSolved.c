#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void){

    int array [ROWS][COLS], loop_row, loop_col;
    int array_sec[ROWS][COLS], temp_in; 

    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            printf("Enter nunber for first array in row %d and colunm %d: ", loop_row, loop_col );
            scanf("%d", &array[loop_row][loop_col]);
        }
    }

    printf("\n\n\n");

        do
        {
            printf("Enter nunber between 1 and 5: ", temp_in );
            scanf("%d", &temp_in);

        }while((temp_in < 1) || (temp_in > 5));

    for(loop_row = 0; loop_row < ROWS; loop_row++)
    {
        for(loop_col = 0; loop_col < COLS; loop_col++)
        {
            if(array[loop_row][loop_col] == temp_in)
            {
                array_sec[loop_row][loop_col] = array[loop_row][loop_col];
            }
            else 
            {
                array_sec[loop_row][loop_col] = 0;
            }
        }
    }
        

    printf("The Frist array!\n");

    for(loop_row = 0;loop_row < ROWS;loop_row++)
        {
            for(loop_col = 0;loop_col < COLS;loop_col++)
            {                               
                printf("| %d |", array[loop_row][loop_col]);
            }
            printf("\n");
        
        }

    printf("The second array!\n");

     for(loop_row = 0;loop_row < ROWS;loop_row++)
        {
            for(loop_col = 0;loop_col < COLS;loop_col++)
            {                               
                printf("| %d |", array_sec[loop_row][loop_col]);
            }
            printf("\n");
        }


    return 0;
}