#include<stdio.h>

int main(void){

    int i; 

    printf("Enter a three digit number: ");
    scanf("%d", &i);

    printf("The revers number: %d\n", 100*(i % 10));
    printf("The revers number: %d\n", 10*(i / 10 % 10));
    printf("The revers number: %d\n", i/100);

   i = 100*(i % 10) + 10*(i / 10 % 10) + i/100;

   /*
   245 % 10 = 5 
   5 * 100 = 500

   245 / 10 = 24
   24 % 10 = 4
   4 * 10 = 40 

   245 / 100 = 2

   200 + 40 + 2 = 542
   */ 

   printf("The revers number: %d", i);

    return 0;
}