/* Removed repeating line in a string so if the user enter "Hello There" and then old "Hello 
   when the code terminats you are should only be "lefted" the there*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char * noIn(char str1[], char str2[]);

int main(void){

    char str1[MAX], str2[MAX], str3;

    printf("Enter a string: ");
        gets(str1);    

    printf("Enter a string: ");
        gets(str2);    

    printf("%s\n", noIn(str1, str2));

    return 0;
 }

char * noIn(char str1[], char str2[]){

    int str1Lengh,str2Lengh ,count, temp, total;

    str1Lengh = strlen(str1);
    str2Lengh = strlen(str2);

    count = temp = 0;

    for(int i = 0; i < str2Lengh; i++){
        for(int j = 0; j < str1Lengh; j++){
            temp = count;
            count = 0;
            if(str2[i] == str1[j]){
                for(int u = j ; u < str1Lengh; u++){
                    count++;
                    if(count > temp)
                        total = count;
                }
             }
        }
    }

    total = (str1Lengh+1) - total;

    char *str3 = (char*)malloc(100 * sizeof(char));

    strcpy(str3, &str1[total]);

    if(str3[0] == '\0'){
        return 0;
    }
    else{
        return str3;
    }
}
