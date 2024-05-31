#include <stdio.h>

int main(void){

    float i,l,k;

    printf("Enter 3 numbers: ");
    scanf("%f%f%f", &i, &l, &k);

    printf("Max %f\n", (i >= l && i >= k) ? i : (l > i && l > k) ? l : k); 


    return 0;
}