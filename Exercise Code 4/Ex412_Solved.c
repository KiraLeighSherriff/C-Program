#include <stdio.h>

int main(void){

    unsigned char num , tmp; 

    printf("Enter number: ");
    scanf("%d", &num); 

    tmp = num & 0xF;
    /*
    if user enter 5 

        0101
        1111
        ----
        0101 = 5

        0101 0000 << 4 
 >> 4   0000 0101 
    +   --------- 
        0101 0101 = 85
        */   

    tmp <<= 4; 
    tmp += num;

    printf("%d\n", tmp); 

    return 0;
}