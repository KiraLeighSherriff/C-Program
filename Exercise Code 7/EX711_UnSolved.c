#include<stdio.h>

#define ROWS 6 
#define COLS 3 

int main(void){

    int arr[ROWS][COLS], i, k;

    for(i = 0; i < ROWS/2; i++)
    {
        for(k = 0; k < COLS; k++)
        {
            printf("Enter number for Row %d and Column %d: ", i, k);
            scanf("%d", &arr[i][k]);

        }
    }

    printf("\n\n\n New Martix numbers!!\n\n");

    for(i = 3; i < ROWS; i++)
    {
        for(k = 0; k < COLS; k++)
        {
            printf("Enter number for Row %d and Column %d: ", i, k);
            scanf("%d", &arr[i][k]);

        }
    }
    
    printf("The Orginal Matix");
    printf("\n");
    for(i = 0; i < ROWS/2; i++)
    {
        for(k = 0; k < COLS; k++)
        {
            
            printf("| %d |", arr[i][k]);        
        }
        printf("\n");
    }

    printf("\n\n");


    printf("The New Matix");
    printf("\n");
    for(i = 3; i < ROWS; i++)
    {
        for(k = 0; k < COLS; k++)
        {
            
            printf("| %d |", arr[i][k]);        
        }
       printf("\n"); 
    }

    
    

    return 0;
}