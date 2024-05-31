#include <stdio.h>
//adding the to largest number together

int main(void){

    int i,o,l,p;

    printf("Enter 4 number: ");
    scanf("%d%d%d%d", &i, &o ,&l, &p); 

    if((i > o) && (o > p))
    {

        if((l > o) && (i > p))
        {
            printf("%d + %d = %d", i, l , i + l);
        } 
        else 
        { 
        printf("%d + %d = %d", i, o , i + o);
        }
    }
    else if((o > p) && (p > l))
    {
        printf("%d + %d = %d", o, p , o + p);
    }
    else if((i > o) && (l > p))
    {
        if((p > i) && ( l > o))
        {
            printf("%d + %d = %d", l ,p, l + p);
        }
        else
        {
            printf("%d + %d = %d", i, l , i + l);   
        }
    }
    else if((o > p) && (o > i))
    {
        printf("%d + %d = %d", o, l , o + l);
    }
    else if((o > i) && (p > l))
    {
        printf("%d + %d = %d", o, p , o + p);
    }
    else if((i > o) && (p > l))
    {
        printf("%d + %d = %d ", i, p , i + p);
    }




    return 0;
}