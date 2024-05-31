#include <stdio.h>
#include <stdlib.h> // to used abs
#include <math.h>

int main(void){

    int a = -34;
    int b = -21;

    double c = 153.38;

    printf("%d\n", a);
    printf("%d\n\n", b);

    printf("%d\n", abs(a)); /*abs returns the absolute value of a and b*/
    printf("%d\n", abs(b));

    printf("%.1f\n", fabs(c));//fabs to round a number up


    return 0; 
}