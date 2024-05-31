#include <stdio.h>

int main(void){

    int j,i;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &i , &j);

    printf("Order smallest to lagest: ");

    if(i > j)
    {
        printf("%d %d", j ,i);
    }
    else 
    {
        printf("%d %d", i, j);
    }


    return 0;
}