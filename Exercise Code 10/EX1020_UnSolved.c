#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100 //Number of character in a string
#define NUM 20 //number of strings

int main(void){

        char str1[NUM][MAX], str2[MAX];

        for(int i = 0; i < NUM;i++){

                printf("Enter a string: ");
                gets(str1[i]);
        }

        for(;;){

                printf("Enter a string you want to remove\n");
                printf("Or press 'v' to view string\n");
                printf("Press 'q' to exit\n");
                printf("Enter: ");
                gets(str2);

                if(str2[0] == 'q' && str2[1] == '\0' ){
                       exit(0);
                }
                else if(str2[0] == 'v' && str2[1] == '\0'){
                        for(int i = 0; i < NUM;i++){
                                if(str1[i][0] != '\0')
                                printf("%s\n", str1[i]);
                        }
                }

                for(int i = 0; i < NUM;i++){

                if(strcmp(str1[i],str2)==0){
                        str1[i][0] = '\0';
                }
                }
        }
        
return 0;
}