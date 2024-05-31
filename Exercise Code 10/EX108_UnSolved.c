#include <stdio.h>
#include <string.h>

//How many times can the second string fit into the firstSD

int main(void){

    char fristString[100], secondString[100];
    int fristStringLengh, secondStringLengh, totalTime;
    totalTime = 0;

    printf("Enter the first sentence: ");
        gets(fristString);
        fristStringLengh = strlen(fristString);
        
        
    do{
        printf("Enter the second sentence(Contain less character than the first): ");
        gets(secondString);
        secondStringLengh = strlen(secondString);

    }while(fristStringLengh < secondStringLengh);

    totalTime = fristStringLengh/secondStringLengh;

    printf("The second string can fit into the first string %d times", totalTime);



    return 0;
}