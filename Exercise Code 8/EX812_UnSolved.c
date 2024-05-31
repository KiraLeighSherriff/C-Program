#include <stdio.h>
#include <stdlib.h>
/*Replace duplites numbers with -99 
doesn ot full work, but most of the time
it does work.*/

#define input 10

int main(void){

    int arr_input[input];
    int *p = arr_input+1, *temp; 

    for(int i = 0; i < input; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &arr_input[i]);
    }

    for(int i = 0; i < input-i; i++)
    {
        temp = &arr_input[i];

             for(int k = 1; k < input; k++)
            {
                p = &arr_input[k];

                if(*temp == *p)
                    arr_input[k] = -99;
            
            }
    }

    for(int i = 0; i < input; i++)
        printf("%d\n", arr_input[i]);

      
    return 0;
  
}