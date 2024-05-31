#include <stdio.h>

#define MAX 100

void compare(char *str1, char *str2);

int main(void){

    char str1[MAX], str2[MAX];
    int str1Lengh, str2Lengh; 

    printf("Enter a string: ");
    gets(str1);

    printf("Enter a string: ");
    gets(str2);

    compare(str1, str2);

    return 0;
}

void compare(char *str1, char *str2){

    int num = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] == str2[i])
            num++;
    }

    printf("%d", num);
}