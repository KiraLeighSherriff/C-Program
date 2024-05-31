#include <stdio.h>

int main(void){

    int i, n_50, n_20, n_10, n_1, rem;

    printf("Enter a postive number: ");
    scanf("%d", &i); 

    n_50 = i/50;
    rem = i%50;

    n_20 = rem/20;
    rem = rem/20;

    n_10 = rem/10;
    n_1 = rem/10;
    printf("%d*50, %d*20, %d*10, %d*1\n", n_50, n_20, n_10, n_1);
    
    return 0;
}