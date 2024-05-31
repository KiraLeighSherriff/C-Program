#include<stdio.h>

#define size 100

int main(void){

    int i, o, p;
    float grd, fail, suc, arr1[size], arr2[size]; 
    o = p = 0;

    for(i = 0; i < size; i++)
    {
        printf("Enter Student %d grade: ", i);
        scanf("%f", &grd);
        if(grd == -1)
            break;

        if(grd >= 5 && grd <= 10)
        {
            suc += grd;
            arr1[o] = grd;
            o++;
        }
        else if(grd >= 0 && grd < 5)
        {
            fail += grd;
            arr2[p] = grd;
            p++;
        }
    }

    if(i != 0)
    {
        if(o != 0)
            printf("\nSuccess_Avg: %.2f\n", suc/o);
        else
            printf("\nAll students failed\n");

        if(p != 0)
            printf("\nFail_Avg: %.2f\n", fail/p);
        else
            printf("\nAll students passed\n");
    }

    return 0;
}