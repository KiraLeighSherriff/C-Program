#include <stdio.h>

int main(void){

    int grade;

    printf("Enter grade: ");
    scanf("%d", &grade);

    printf("%s", (grade >= 18) ? "Execllent" : (grade >= 16) ? "Very Good" : (grade >= 13) ? "Good" :  (grade >= 10) ? "Dangerous Zone" : "Need Help" );
        


    return 0; 
}