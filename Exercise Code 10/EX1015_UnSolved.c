#include <stdio.h>
#include <string.h>

// Displaying the longest part of a string

int main(void){

    char str1[100], str2[100], str3[100];
    int i, j, k, p,u, str1Lengh, str2Lengh;
    int count, temp, total;
    count = temp = 0;

    count = temp = 0;

     printf("Enter a string: ");
        gets(str1);    

    str1Lengh = strlen(str1);

     printf("Enter a string: ");
        gets(str2);    

    str2Lengh = strlen(str2);

    for(i = 0; i < str2Lengh; i++){
        for(j = 0; j < str1Lengh; j++){
            temp = count;
            count = 0;
            if(str2[i] == str1[j]){
                for(u = j ; u < str1Lengh; u++){
                    count++;
                    if(count > temp)
                        total = count;
                }
             }

        }
    }

    total = (str1Lengh+1) - total;

    strcpy(str3, &str1[total]);
    printf("%s", str3);

    return 0;
}