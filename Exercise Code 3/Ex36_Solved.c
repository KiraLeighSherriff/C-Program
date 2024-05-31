#include<stdio.h>

int main(void){

    int i, k , tmp;

    printf("Enter two numebr: ");
    scanf("%d%d", &i,&k);

    printf("Before swap i = %d, k = %d\n", i,k);

    tmp = i;
    i = k;
    k = tmp;

    printf("After swap i = %d, k = %d", i,k);

    return 0;
}