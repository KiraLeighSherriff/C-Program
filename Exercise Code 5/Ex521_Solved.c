#include <stdio.h>

int main(void){

    char s; 
    int i, k; 

    printf("Enter a Mathatical sign and two intagers: ");
    scanf("%c%d%d", &s, &i, &k);

    switch(s)
    {

        case '+':
            printf("Sum = %d", i+k);
        break; 

         case '-':
            printf("Sum = %d", i-k);
        break; 

         case '*':
            printf("Sum = %d", i*k);
        break; 

        case '/':
            printf("Sum = %d", i/k);
        break; 

        default:
            printf("Enter with the correct fomrate!!!");
        break; 
    }


    return 0;
}