#include <stdio.h>
#include <string.h>
//removed letter that are in teh secons string found in the first.

int main(void){

    char str1[100], str2[100];
    int i, j,k, str1Lengh, str2Lengh;

     printf("Enter a string: ");
        gets(str1);    

    str1Lengh = strlen(str1);

     printf("Enter a string: ");
        gets(str2);    

    str2Lengh = strlen(str2);

    for(i = 0; i < str2Lengh; i++){

        for(j = 0; j < str1Lengh; j++) {

            while(str2[i] == str1[j]){
                for(k = j; k < str1Lengh; k++){        
                        str1[k] = str1[k+1];
                }
            }
        }
    }
    

    printf("%s", str1);
    return 0;
}