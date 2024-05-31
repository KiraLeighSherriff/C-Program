#include <stdio.h>

int main(void){

    double a , b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if(a == 0)
        {   
            printf("Unlimted Solation\n");
        }
    else
        {
            printf("No Solation\n");
        }

        printf("%lf\n", -b/a );


    return 0;
}