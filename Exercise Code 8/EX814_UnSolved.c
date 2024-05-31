#include <stdio.h>
#include <stdlib.h>

int main(void){

    int prt, array[] = {10,20,30,40};
    int k = 0;

     for(int i = 3;i > 1;i--){

         prt = array[i];

            printf("I: %d\n", prt);
            // printf("p: %d\n", *prt);

            if(i == 2)
                k = 1;
        for(k ;k < 2;k++){

            if(array[i] == 40)
            {
                array[i] = array[k];
                array[k] = prt;

            }
            printf("I2: %d\n", array[k]);
            break;
        }
    }

    for(int k = 0;k < 4;k++)
        printf("%d\n", array[k]);

    return 0;
}
