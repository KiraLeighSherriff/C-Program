#include <stdio.h>
#include <string.h>

//Romved number ans specal character from string

int main(void){

    char str[100];
    int lengh, count;
    int i, j;
    count = 0;

    printf("Enter a string: ");
        gets(str);

    lengh = strlen(str);

    for(i = 0; str[i] != '\0'; ++i)
        {
            while (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0') )
            {
                for(j = i; str[j] != '\0'; ++j)
                {
                    str[j] = str[j+1];
                }
                str[j] = '\0';
            }
        }


    printf("%s", str);
    return 0;
}