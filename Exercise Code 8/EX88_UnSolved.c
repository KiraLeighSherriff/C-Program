#include <stdio.h> 

// If the number that is inputed id less then -5 and greater than 10 it will be counted.  


int main(void){

    int *p1, *p2, *p3, min, max, num;
    min = 0;
    max = 0;

    p2 = &min; 
    p3 = &max;

    for(int i = 0; i < 8; i++)
    {

        printf("Enter number %d: ", i);
        scanf("%d", &num);

        p1 = &num;

        if(*p1 < -5)    
            ++*p2;

        if(*p1 > 10)
            ++*p3;
    
    }

    if((*p2 == 0) && (*p3 == 0 ))
        printf("No number smaller than -5 and no number bigger than 10");
    else 
        printf("Minimum number smaller than -5 = %d \nMaximum number greater than 10 = %d", *p2, *p3);

    return 0;
}