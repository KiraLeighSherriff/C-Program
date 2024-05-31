#include <stdio.h>

int main(void){

    int j, k, l, i, max;

    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d", &j, &k, &l, &i);

    if(j > k)
        max = j;
    else 
        max = k;
    
    if(max < l)
        max = l;

    if(max < i) 
        max = i;
    
    printf("Largest number is %d", max); 

    return 0;
}