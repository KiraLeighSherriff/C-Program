#include <stdio.h>

int main(void)
{
    int a[] = {0, 0, 1, 2, 3}, b[] = {0, 0, 4, 5, 6};
    int *ptr1 = a, *ptr2 = b;

    while(!*ptr1++ || !*ptr2++); 
    
    printf("%d %d\n", *(b+(ptr1-a)), *(a+(ptr2-b)));

    return 0;
}