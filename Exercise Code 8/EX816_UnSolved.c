#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *prt1, *prt2 , var1, var2, temp;

    printf("Enter a number: ");
        scanf("%d", &var1);

    printf("Enter a number: ");
        scanf("%d", &var2);

    prt1 = &var1;
    prt2 = &var2;

    temp = *prt1;
    *prt1 = *prt2;
    prt2 = &temp;

    printf("%d %d", *prt1, *prt2);
    return 0;
}