#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Getting the input inbetween the first two *

int main (void){

    int letter, digits, others, len, checkAsterisk;
    int Asterisk = 42;
    char input[100], lengh;
    checkAsterisk = 0;

    letter = digits = others = 0;

    do{

        printf("Enter a string, there need to be atleat 2 * in the sring: ");
        gets(input);

        lengh = strlen(input);
        printf("%d\n", lengh);

    for (int i = 0; i < lengh; i++) //look through the string 
    {

        if (input[i] == Asterisk) { //Find out if any character are * 
            checkAsterisk++;
        }

        if(checkAsterisk == 1){
            if(input[i] >= 'a' && input[i] <= 'z'){
                letter++; }
            else if(input[i] >= '0' && input[i] <= '9'){
                digits++;}
            else{
                others++;}
        }
        
        if(checkAsterisk == 2)
        {
            printf("Amount of letter: %d\n Amount of digits: %d\nAmount of others: %d\n", letter, digits, others);
            break;
        }
        else if(checkAsterisk > 2)
        {
            printf("Make sure the there are more or 2 *\n ");
        }
    }

    }while(checkAsterisk != 2);

    printf("%d\n", checkAsterisk);
    printf("%d\n", lengh);

    return 0;
}