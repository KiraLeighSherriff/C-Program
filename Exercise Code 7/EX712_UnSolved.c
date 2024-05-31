#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5
#define MIN 1000
#define MAX 2000


int main(void){

    int arr[ROWS][COLS], i, k, j;

    srand(time(NULL));
    for(i = 0;i < ROWS;i++)
    {
        for(k = 0;k < COLS;k++)
        {                               
            arr[i][k] = rand() % MIN;
        }
    }

    for(i = 0;i < ROWS;i++)
    {
        for(k = 1;k < COLS;k++)
        {  
            j = k; 
            if(i == 0)
            {
                arr[i][j] = rand() % MAX + MAX;
            }
            if(i == 1)
            {
                arr[i][j] = rand() % MAX + MAX;
            }
            if(i == 2 && k > 2)
            {
                arr[i][j] = rand() % MAX + MAX;
            }
            else if(i == 3 && k > 3)
            {   
                arr[i][j] = rand() % MAX + MAX;
            }
        }
    }

    arr[0][0] = rand() % MIN + 1000;
    arr[1][1] = rand() % MIN + 1000;
    arr[2][2] = rand() % MIN + 1000;
    arr[3][3] = rand() % MIN + 1000;
    arr[4][4] = rand() % MIN + 1000;
       

for(i = 0;i < ROWS;i++)
    {
        for(k = 0;k < COLS;k++)
        {
             printf("%d |  ", arr[i][k]);  
        }
        printf("\n");
    }

    return 0;
}