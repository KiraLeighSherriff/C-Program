#include <stdio.h>

int main(void)
{

    int i = 0, a[] = {10, 20, 30, 40, 50}, *p = a;

    while(&p[i] < a+5)
    {
        (*(p+i))++;
        p++;
        i++;
        
    printf("%d ",a[i] );
    }

    
return 0;
}