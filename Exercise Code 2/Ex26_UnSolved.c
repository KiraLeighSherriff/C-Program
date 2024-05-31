#include <stdio.h>

int main(void){

    int x = 21;
    int y = 0xa; 
    int z = 077;

    printf("%d\n", x);
    printf("%5d\n", x);
    printf("%d\n", x-6);
    printf("%d%%\n", x+4);

    printf("%X\n", y);
    printf("%x\n", y);
    printf("%d\n", y);

    printf("%o\n", z);
    printf("%03o\n", z);
    printf("%d\n", z);
       

    return 0;
}