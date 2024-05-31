#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//reversing hte string

int main(void){

    char string[100];
    int lengh;

    printf("Enter a string: ");
        gets(string);

    lengh = strlen(string);

    if(lengh > 100){
        printf("Can not go over 100 characters");
        exit(0);
    }

    printf("Reversed string: %s\n", strrev(string));



    return 0;
}