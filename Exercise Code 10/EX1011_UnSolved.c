#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Enter a single character at a time when can not enter the same character more than once. Prees q to exit

#define MAX 10

int main(void){

    char str[MAX], letter;
    int i,j, lengh;

    for(i = 0; i < MAX; i++){
        printf("Enter a character: ");
        scanf("\n%c", &str[i]);

        if(str[i] == 'q')
            exit(0);

        for(j = 0; j < i; j++){
            if(str[j] == str[i]){
                printf("You can not have duplicat letters!\nPlease enter another letter\n");
                do{
                    printf("Enter a character: ");
                    scanf("\n%c", &str[i]);
                }while(str[j] == str[i]);
                
            }
        }
    }

    printf("You have entered %s", str);
    

    return 0;
}