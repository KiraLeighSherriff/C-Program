#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Each letter of the alphabet in has a number 
// a-i is 1-9
// j-r is 10-90
// s-z is 100-800
// Gives the sum at the end of the program from total number of input

int main(void){

    char str[100];
    int lengh, sum, i;
    sum = 0;

    printf("Enter a string: ");
        gets(str);    

    lengh = strlen(str);
    

    for(i = 0; i < lengh; i++){

    if(str[i] >= 'a' && str[i] <= 'i'){
            sum += ((int)str[i] - 96);
        }
    if(str[i] >= 'j' && str[i] <= 'r'){
            sum += ((int)str[i] - 105)*10;
        }
        if(str[i] >= 's' && str[i] <= 'z'){
            sum += ((int)str[i] - 114)*100;
        }

    }

    printf("%d",sum);



    return 0;
}