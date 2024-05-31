#include <stdio.h>
#include <string.h>

void count(char *str1);
int main(void){

    char str[100];
    int lengh;

    printf("Enter string: ");
    gets(str); 

    lengh = strlen(str);

    if(str[0] == 'a' && str[lengh-1] == 'q')
        count(str);

    return 0;
}

void count(char *str){

    int number, lower, upper;
    number = lower = upper = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z' ){
            lower++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            upper++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            number++;
        }

    }
    
    printf("Lower case characters: %d\nUpper case characters: %d\nNumber: %d", lower, upper, number);
}