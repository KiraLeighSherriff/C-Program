#include <stdio.h>

#define SIZE 50

int main(void)
{
    int i, j, pos, num, found, code[SIZE];
    pos = 0;

    while(pos < SIZE)
    {
        printf("Enter code: ");
        scanf("%d", &num);
 
            if(num == -1)
                break;
        found = 0;
 
        for(j = 0; j < pos; j++)
        {
            if(code[j] == num)
            {
                printf("Error: Code %d exists. ", num);
                found = 1;
                break; 
            }
        }
        
    if(found == 0)
    {
        code[pos] = num;
        pos++;
    }
}
    printf("\nCodes: ");
    
    for(i = 0; i < pos; i++)
        printf("%d ", code[i]);
        
return 0;
}
