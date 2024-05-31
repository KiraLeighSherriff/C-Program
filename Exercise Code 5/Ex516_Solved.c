#include <stdio.h>

int main(void){

    
    float grade, i;

    printf("Enter grade: ");
    scanf("&f", &grade);

    i = (grade >= 5 && grade <= 10) ? grade : -1;

    printf("%.2f\n", i);

    return 0;
}