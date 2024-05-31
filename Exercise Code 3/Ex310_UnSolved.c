#include<stdio.h>

int main(void){

    int i, j , l ,k, tmp;

    printf("Enter two three digit numbers: ");
    scanf("%d%d", &i, &j);

    printf("%d , %d\n", i , j);

    j = 100 *((int)j%10) + 10*((int)j%100/10) + (int)j/100; // flip j so it's the opersite of the input  

    l = (i/100) * 100; // get the 100 unit of each number 
    k = (j/100) * 100;

            printf("%d , %d the 100 unit\n", k , k);
            printf("%d , %d the flip\n", i , j);

    i = i%100; // mod the number to get the remainder after division 
    j = j%100;

            printf("%d , %d getting the remainder\n", i , j);

    tmp = j; // Swap the two remainder 
    j = i;
    i = tmp;

        printf("%d , %d swaping the two numbers\n", i , j);

    i = i + l; // Add the 100 unit to the remainder 
    j = j + k;

        printf("%d , %d adding the 100 unit to the remainder\n", i , j);

    i = 100 *((int)i%10) + 10*((int)i%100/10) + (int)i/100; // flip j so it's the opersite of the input

    printf("%d , %d", j , i);

    return 0;
}