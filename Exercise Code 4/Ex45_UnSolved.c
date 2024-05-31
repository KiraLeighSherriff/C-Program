#include <stdio.h>
/*swapping to number with out using any other varible*/

int main(void){

    int i, y;

    printf("Enter two number: ");
    scanf("%d%d", &i, &y); 

    printf("%d %d \n", i ,y);


    printf("%d %d \n", (i^y)^i ,(y^i)^y);
    /* Enter  i= 15     and    y =  8
        XOR    1111             1000
               ----             ---- 
        XOR    0111             0111
               1111             1000
               ----             ----
           i = 1000         y = 1111
    */
   
    return 0;
}