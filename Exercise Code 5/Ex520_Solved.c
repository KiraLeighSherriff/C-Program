#include <stdio.h> 

int main(void){

    double grade; 

    printf("Enter grade: ");
    scanf("%lf", &grade); 

    printf("%s", (grade >= 7.5 && grade <= 10) ? "A" : ( grade >= 5 && grade < 7.5) ? "B" : ( grade >= 0 && grade < 5) ? "Next Time" : "Wrong Input");


    return 0; 
}