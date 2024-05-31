#include <stdio.h>

#define size 10

int main(void){

    int grd[size], freq, most, i, j;
    int temp, tempcount;

    for(i = 0; i < size; i++)
    {
        printf("Enter %d grade: ", i);
        scanf("%d", &grd[i]);

            while((grd[i] > 10) || (grd[i] < 0))
            {
                printf("Enter %d grade: ", i);
                scanf("%d", &grd[i]);
            }
    }


    for (i = 0; i < (size - 1); i++)
    {
        temp = grd[i];
        tempcount = 0;
        for (j = 0; j < size; j++)
        {
            if (temp == grd[j])
                tempcount++;
        }
        if (tempcount > freq)
        {
            most = temp;
            freq = tempcount;
        }
    }

    printf("%d has appeared %d times", most, freq);


    return 0;
}