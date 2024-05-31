#include <stdio.h>

int main(void)
{

    int *ptr, i = 10, j = 20, k = 30;

    ptr = &i;
    printf("%d %d %d\n", i, j, k);
    *ptr = 40;
    printf("%d %d %d\n", i, j, k);

    ptr = &j;
    printf("%d %d %d\n", i, j, k);
    *ptr += i;
    printf("%d %d %d\n", i, j, k);

    ptr = &k;
    printf("%d %d %d\n", i, j, k);
    *ptr += i + j ;

printf("%d %d %d\n", i, j, k);
return 0;
}