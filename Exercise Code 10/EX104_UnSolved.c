#include <stdio.h>
#include <string.h>

//reversing the string if it ends in two aa's

int main(void){

    char string[100];
    int i, lengh, temp, flag;

     printf("Enter a string: ");
        gets(string);

    lengh = strlen(string);


    for(i = lengh; i >= lengh-2; i--){

        flag = 0;
        
        if((string[i] == 'a') && (temp == 'a')){
            printf("Reversed string: %s\n", strrev(string));
            printf("Orginal string: %s\n", string);
        }
        else{
            flag = 1;
        }

        temp = string[i];
    }

    if(flag == 1){
        printf("\nThe string was not revered as it did not end in 2 a's\n");
        printf("Orginal string: %s\n", string);
    }

    return 0; 
}