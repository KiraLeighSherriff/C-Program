#include <stdio.h>
#include <string.h>

//selecting part of a string to delete

int main(void){

    char string[100], tmp1[100],tmp2[100];
    int firstNum, secondNum, count;
    count = 0;

    printf("Enter a string: ");
        gets(string);

    printf("Enter two numbers.\n");
    printf("One for the letter starting letter that you want to delete.\n");
    printf("The second number for the last letter you want to delete.\n");

    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    strncpy(tmp1, string, secondNum); //getting the first numbers
    tmp1[firstNum-1] = '\0';

    strcpy(tmp2, &string[secondNum]);

    strcat(tmp1, tmp2); //conbing the two strings together
    
 
    //Removing blank spaces from the
    for (int i = 0; tmp1[i]; i++)
        if (tmp1[i] != ' ')
            tmp1[count++] = tmp1[i]; 
                                   
    tmp1[count] = '\0';


    printf("\n%s", tmp1);

    return 0;
}