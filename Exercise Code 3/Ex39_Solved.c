#include<stdio.h>

int main(void){

    double i, j; 

    printf("Enter 2 floats: ");
    scanf("%lf%lf", &i, &j); 

    printf("There intager sun is %d\n", (int)i+(int)j);
    printf("There decimal sun is %.2lf\n", i+j - ((int)i+(int)j) );

    return 0;
}