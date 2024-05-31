#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Converting HEX to its decimal

#define MAX 8 

int main(void){

    char str[MAX];
    int i, lengh, decimal, val; 

    do{

    printf("Enter a hexdecimal(smaler or equal to 8): ");
                    gets(str);    

    lengh = strlen(str);
    lengh--;

        for(i = 0; i < lengh; i++){
            while(!( (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= '0' && str[i] <= '9'))){

                printf("Enter a hexdecimal(smaler or equal to 8): ");
                    gets(str);    
            }

        }

    }while(lengh >= MAX);

    lengh = strlen(str);
    lengh--;

    for(i=0; str[i]!='\0'; i++) 
    { 
  
        /* Find the decimal representation of hex[i] */ 
        if(str[i]>='0' && str[i]<='9') 
        { 
            val = str[i] - 48; 
        } 
        else if(str[i]>='a' && str[i]<='f') 
        { 
            val = str[i] - 97 + 10; 
        } 
        else if(str[i]>='A' && str[i]<='F') 
        { 
            val = str[i] - 65 + 10; 
        } 
 
        decimal += val * pow(16, lengh); 
        lengh--; 
    }     
   

    printf("Hexadecimal number = %s\n", str); 
    printf("Decimal number = %d", decimal); 

    return 0;
}