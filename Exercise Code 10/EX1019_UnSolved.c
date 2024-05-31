#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Coverting string to float

int main(void){

    char str1[10]; 
    double number;
    int i, lengh;
    
    printf("Enter a number can be both negative and postive\n");

    for(int i = 0; i < lengh; i++){

    do{
    printf("Enter a string numbers: ");
        gets(str1); 

    lengh = strlen(str1);

    }while(!((str1[i] >= '0' && str1[i] <= '9') || (str1[i] == 45))); 
    break; 

    }   

    printf("%lf", atof(str1));

    // atof for converting string to flaot different to atoi for int

        return 0;
}