#include <stdio.h>

int main(void){

    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, dig12, dig13, chk_dig, sum;

    printf("Enter ISBN digits: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d", &dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dig10, &dig11, &dig12, &dig13);

    sum = dig1 + dig2*3 + dig3 + dig4*3 + dig5 + dig6*3 + dig7 + dig8*3 + dig9 + dig10*3 + dig11 + dig12*3;
    chk_dig = 10 - (sum%10);

    if(chk_dig == 10)
    {
        chk_dig = 0;
    }

    if(chk_dig == dig13)
    {
        printf("Vaild");
    }
    else 
    {
        printf("invaild");
    }

    return 0;
}
