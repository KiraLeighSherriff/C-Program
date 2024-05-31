#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Converting string to intager

int main(void){

    char str1[10]; 
    int number, i, lengh;
    
    printf("Enter a number can be both negative and postive\n");

    for(i = 0; i < lengh; i++){

    do{
    printf("Enter a string numbers: ");
        gets(str1); 

    lengh = strlen(str1);

    }while(!((str1[i] >= '0' && str1[i] <= '9') || str1[i] == 45)); 
    break; 

    }   

    number = atoi(str1);

    printf("%d", number);

        return 0;
}