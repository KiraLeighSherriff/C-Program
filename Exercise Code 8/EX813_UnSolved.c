#include <stdio.h>
#include <stdlib.h>

#define input 10

int main(void){

    int ArrInput[input], *prt, num = 0;

    for(int i = 0; i < input; i++)
    {
        do
        {
            printf("Enter %d number: ", i);
            scanf("%d", &ArrInput[i]);
            prt = &ArrInput[i];

            if(*prt != -1 || *prt != 0)
                num++;

            if(*prt == 0)
            {
                num -= 1;
                printf("%d where addded to the array!", num);

                exit(0);
            }
                


        }while((*prt == -1) || (*prt < ArrInput[i-1]));

    }   

    for(int k = 0; k < input; k++)
    {
        printf("Number inputed: %d\n", ArrInput[k]);
        printf("%d where addded to the array!", num);
    }

    return 0;
}