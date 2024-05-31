#include <stdio.h>

#define MAX 10

char CharacterNum(char str[], char chara);

int main(void){

    char str[MAX], chara;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character: ");
    scanf("%c", &chara);

    printf("%d", CharacterNum(str, chara));

    return 0;
}

char CharacterNum(char str[], char chara){

    int total = 0; 

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == chara)
            total++;
        }


   return total;
}