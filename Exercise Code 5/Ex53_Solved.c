#include <stdio.h>

int main(void){

    int i,k;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &i, &k);

    if(i > k)
    {
        printf(" %d > %d ", i , k );
    }
    
    if(i < k)
    {
        printf(" %d < %d ", i , k );
    }

     if(i == k)
    {
        printf(" %d == %d ", i , k );
    }




    return 0;
}