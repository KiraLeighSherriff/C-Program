#include <stdio.h>

int main(void){

    int i,k,p; 

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &i, &k, &p);

    if(i < k && i < p && k < p)
    {
        printf("%d %d %d", i , k , p);
    }
    else if(k < i && k < p && i < p)
    {
        printf("%d %d %d", p , i , k);
    }
    else 
    {
      printf("%d %d %d", k , p , i);  
    }

    return 0;
