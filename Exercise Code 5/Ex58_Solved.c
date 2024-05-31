#include <stdio.h>

int main(void){

    unsigned int code, new_code;

    printf("Enter 4 digit code: ");
    scanf("%d", &code);

    if( code == 1234)
    {
        printf("Enter a new code: ");
        scanf("%d", &code);

        printf("Enter code again: ");
        scanf("%d", &new_code); 

        if(new_code == code)
            printf("New code is stored!"); 
        else 
            printf("Entered Wrong code!");
    }
    else 
        printf("Wrong code!!!");


    return 0;
}