#include<stdio.h>

#define size 10

int main(void){

    int arr[size] = {0}, i, num;

    for(i = 0; i < size; i++)
    {
        for(i = 0; i < size; i++)
        {
            do
            {
                printf("Enter number: ");
                scanf("%d", &num);

                    if(num == 0 || num == -1)
                    printf("Not valid input !!!\n");

            } while(num == 0 || num == -1);

            if(i & 1) 
            {
                if(num & 1) 
                    arr[i] = num;
                    }
                else
                    {
                        if((num & 1) == 0) 
                        arr[i] = num;
                    }
        }
            printf("\n*** Array elements ***\n");

                for(i = 0; i < size; i++)
                {
                    if(arr[i] == 0)
                        arr[i] = -1;
                        printf("%d\n", arr[i]);
                }
            return 0;
    }
}