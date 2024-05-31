#include <stdio.h>

int main(void){

    int grade; 

    printf("Enter grade: ");
    scanf("%d", &grade);

    if(grade >= 18)
    {
        printf("Execllent");
    }
    else if(grade >= 16)
    {
        printf("Very Good");
    }
    else if(grade >= 13)
    {
        printf("Good");
    }
    else if(grade >= 10)
    {
        printf("Dangerous Zone");
    }
    else    
    {
        printf("Need help");
    }
        


    return 0; 
}