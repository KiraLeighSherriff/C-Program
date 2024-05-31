#include <stdio.h>

int main(void){

    double x = -12.123456789;

    printf("%.3f\n", x);
    printf("%.9f\n", x);
    printf("%12.6f\n", x);
    printf("%.7f\n", x);
    printf("%.6f\n", x);
    printf("%d\n", x);

    return 0;
}