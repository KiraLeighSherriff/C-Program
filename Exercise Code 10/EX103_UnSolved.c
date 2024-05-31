#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Swaping strings into antother string

int main (void){

    char str1[100],str2[100],str3[100];
    char temp[100], temp2[100];

    printf("Enter a string: ");
        fgets(str1, sizeof(str1), stdin);

    printf("Enter a string: ");
        fgets(str2, sizeof(str2), stdin);

    printf("Enter a string: ");
        fgets(str3, sizeof(str3), stdin);

    strcpy(temp, str1);
    strcpy(temp2, str2);

    strcpy(str1, str3);
    strcpy(str2, temp);
    strcpy(str3, temp2);
    

    printf("%s%s%s", str1, str2, str3);
    




    return 0;
}