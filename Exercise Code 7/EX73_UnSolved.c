#include <stdio.h>

#define size 100

int main(void){

    int num[size], i, j, k;
    int last, hi_berfore, total, g_avg, avg;

    j = last = g_avg = hi_berfore = avg = total = 0;
    k = 1;

    for(i = 0; i < size; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &num[i]);

        if(i == size-1)
        {
            while(num[0] != num[i])
            {
                printf("Last and frist number need to be the same!!\n");
                printf("Enter %d number: ", i);
                scanf("%d", &num[i]);
            }
        }

            j = i - 1;

                if(num[i] > num[j])
                {
                    hi_berfore++;
                }
        
        total += num[i];
        avg = total/k;
        k++;

        if(num[i] > avg)
            g_avg++;

    }

    printf("Number bigger then thier predecessor %d\n", hi_berfore);
    printf("Number bigger then the average %d\n", g_avg);
    

    return 0;
}