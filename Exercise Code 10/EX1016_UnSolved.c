#include <stdio.h>
#include <string.h>

//Putting single intagers into a string

int main(void){

    int input, loop, i;

    printf("How many number want to enter(Less than 100): ");
    scanf("%d", &loop);

    char number[loop];


    for(i = 0; i < loop;i++){

        printf("Enter a number: ");
        scanf("%d", &input);

        number[i] = input+48;
    }

    printf("%s", number);

    return 0;
}