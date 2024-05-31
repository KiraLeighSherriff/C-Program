#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Inputing letter to the ASCII passes 500*/

int main (void)
{
    char letter;
    int totalLetters, sum;
    sum = totalLetters = 0;

    while(sum < 500){

        printf("Enter letters till program closes or press 'q' to exit: ");
        scanf("\n%c", &letter);
        // \n is there to stop the program form running twise

        sum += letter;
        totalLetters++; 

        if(letter == 'q')
            exit(0);
    }

    printf("The total of letter enterd are: %d", totalLetters);
    return 0;
}