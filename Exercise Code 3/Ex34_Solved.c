#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1459

int main(void){

    double radius;

    printf("Enter the ciricles radius: "); 
    scanf("%lf", &radius); 
    printf("Radius = %.2lf, Area = %.2lf, Perimater = %.2lf", radius, PI*radius*radius, 2*PI*radius);

    return 0;
}