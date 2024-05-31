#include <stdio.h>

int main(void){

    unsigned int num, pos;

    printf("Enter number: ");
    scanf("%d", &num); 

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("bit %d is %d", pos, (num >> (pos - 1) & 1));

    return 0;
}