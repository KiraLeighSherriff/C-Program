#include <stdio.h>
#include <string.h>

// Finding what from the frist string matches into the second

int main(void){

    char str1[100], str2[100], str3[100] = {'\0'};
    int i, j, k, p,u, str1Lengh, str2Lengh;
    int count, temp, total;
    count = temp = p = 0;

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
                str3[p] = str1[j];
                p++;
            break;
                }
             }
        }

    if(str3[0] == '\0'){
        printf("Nothing was a match");
    }
    else{
    printf("%s", str3);
    }


    return 0;
}