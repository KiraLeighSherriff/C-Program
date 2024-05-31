#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100 //Number of character in a string
#define NUM 10 //number of strings

int main(void){

     char str1[NUM][MAX], str2[MAX];
     int col, lengh, i;

        for(int i = 0; i < NUM;i++){

                printf("Enter a string: ");
                gets(str1[i]);
        }

        printf("What column do yo want: ");
        scanf("%d", &col);

        for(i = 0;i < NUM;i++){
            if(str1[i][col] != ' '){
                str2[i] = str1[i][col];
                
            }
            str2[i+1] = '\0'; 
        }

        printf("%s", str2);

    return 0;
}