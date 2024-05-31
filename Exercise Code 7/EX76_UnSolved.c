#include <stdio.h>

#define size 5

int main(void){

    int num[size], i, j, cnt, store;
    cnt = 0;

   for(i = 0; i < size; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &num[i]);
        
    }    

   for(i = 0; i < size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            
            if(num[i] == num[j])
            {
                cnt++;
                break;
            }
        }
    }


    printf("Amount of duplicated are %d", cnt);

    return 0;
}