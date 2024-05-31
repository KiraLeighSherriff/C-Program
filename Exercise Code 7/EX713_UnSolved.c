#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 3 
#define COLS 5
#define MAX 21


int main(void){

    int arr[ROWS][COLS], i, k; // For storing
    int sum1, sum2, sum3, sum4, sum5; //Getting the Sum of each of the columns
    int MIN[5]; //stroing mininm in an arrary

    sum1 = sum2 = sum3 = sum4 = sum5 = 0;

    //getting user input for the last column


    printf("Enter Number More than 10 less then 20!\n");

    for(i = 2;i < ROWS;i++)
        {
            for(k = 0;k < COLS;k++)
            {              
                printf("Enter the last Row in colum %d: ", k);
                scanf("%d", &arr[i][k]);

                while((arr[i][k] < 10) || (arr[i][k] > MAX)) // can not be smaller than 10 and bigger than 20
                {
                    printf("Enter the last Row in colum %d: ", k);
                    scanf("%d", &arr[i][k]);              
                }
            }

        }

    //Ramdonly generates a number between 0 and 20

    srand(time(NULL));
    for(i = 0;i < ROWS-1;i++)
        {
            for(k = 0;k < COLS;k++)
            {               
                arr[i][k] = rand() % MAX;  
            }
        }

        //Does the calulations to find out the sum of each column
    
        for(i = 0;i < ROWS;i++)
        {
            for(k = 0;k < 1;k++)
            {     
                sum1 += arr[i][k];                            
            }

            for(k = 1;k < 2;k++)
            {               
                sum2 += arr[i][k];             
            }
        
            for(k = 2;k < 3;k++)
            {               
                sum3 += arr[i][k];             
            }
        
            for(k = 3;k < 4;k++)
            {               
                sum4 += arr[i][k];             
            }

            for(k = 4;k < 5;k++)
            {               
                sum5 += arr[i][k];             
            }

        } 

    //If the sum does not equal to 50 this code will run

    while(sum1 != 50)
    {
        sum1 = 0; //giving the code a fresh run so it not adding to an exsting number
        sum1 += arr[2][0]; // adding the user input to the sum
        for(i = 0;i < ROWS-1;i++)
        {       //frist column only in all rows
             for(k = 0;k < 1;k++)
            {               
                arr[i][k] = rand() % MAX;  //Gen an other random number and will keeping going till sun1 = 50
                sum1 += arr[i][k];  // add the new generated number to the sum                            
            }
        } 
    }
    //Does this for all other columns

    while(sum2 != 50)
    {
        sum2 = 0;
        sum2 += arr[2][1];
        for(i = 0;i < ROWS-1;i++)
        {   //Second column only in all rows
             for(k = 1;k < 2;k++)
            {               
                arr[i][k] = rand() % MAX;
                sum2 += arr[i][k];                              
            }
        } 
    }

    while(sum3 != 50)
    {
        sum3 = 0;
        sum3 += arr[2][2];
        for(i = 0;i < ROWS-1;i++)
        {
             for(k = 2;k < 3;k++)
            {               
                arr[i][k] = rand() % MAX;
                sum3 += arr[i][k];                              
            }
        } 
    }

    while(sum4 != 50)
    {
        sum4 = 0;
        sum4 += arr[2][3];
        for(i = 0;i < ROWS-1;i++)
        {
             for(k = 3;k < 4;k++)
            {               
                arr[i][k] = rand() % MAX;
                sum4 += arr[i][k];                              
            }
        } 
    }

    while(sum5 != 50)
    {
        sum5 = 0;
        sum5 += arr[2][4];
        for(i = 0;i < ROWS-1;i++)
        {
             for(k = 4;k < 5;k++)
            {        
                arr[i][k] = rand() % MAX;       
                sum5 += arr[i][k]; 

            }
        } 
    }

    //Gets the minimun for all of the columns

     for(i = 0;i < ROWS;i++)
        {       //frist column only in all rows
            for(k = 0;k < 1;k++)
            {       
                if(i == 0)
                    MIN[0] = 100;            
                    
                    if(arr[i][k] < MIN[0])//If any number is smaller than the frist input this segement of code will run
                        MIN[0] = arr[i][k];                                   
            }

           for(k = 1;k < 2;k++)
            {               
                if(i == 0)
                    MIN[1] = 100;

                    if(arr[i][k] < MIN[1])
                        MIN[1] = arr[i][k];              
            }
        
            for(k = 2;k < 3;k++)
            {               
                if(i == 0)
                    MIN[3] = 100;

                    if(arr[i][k] < MIN[2])
                        MIN[2] = arr[i][k];              
            }
        
            for(k = 3;k < 4;k++)
            {               
                if(i == 0)
                    MIN[3] = 100;

                    if(arr[i][k] < MIN[3])
                        MIN[3] = arr[i][k];              
            }

            for(k = 4;k < 5;k++)
            {    
                if(i == 0)
                    MIN[4] = 100;

                    if(arr[i][k] < MIN[4])
                        MIN[4] = arr[i][k];             
            }

        } 


    //Printf out the table for the user to see
        for(i = 0;i < ROWS;i++)
        {
            printf("     ");
            for(k = 0;k < COLS;k++)
            {                               
                printf("%d |", arr[i][k]);
            }
            printf("\n");
        }

    //Than prints out all minimuns in each column
        printf("     -------------------|\n");
        printf("MIN: ");
        for(i = 0; i < COLS; i++)
        {
            printf("%d |", MIN[i]);
        }


    return 0;
}