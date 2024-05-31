#include<stdio.h>
#include <stdlib.h>

#define size 100

int main(void){

    double num_ary[size], min, num;
    int i , j, pos;
    pos = 0;
    j = 0;

    for(i = 0; i < size; i++)
    {
        if(i < 0)
            i = 0;

        printf("Enter %d number: ", i);
        scanf("%lf", &num);

        if(num <= 5)
            i--;

        if(num > 5)
        {
            num_ary[i] = num;
            j = i - 1;

                if(num_ary[i] > num_ary[j])
                {
                    min = num_ary[j];
                    pos = j;
                }
         }

        if(num == -1)
            exit(0);

    }

    printf("The minimun number in postion %d is %lf", pos, min);

    return 0;
}