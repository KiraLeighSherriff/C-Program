#include <stdio.h>
//For a pricewise equation 

int main(void){

    int x; 

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x < -5)
    {
        x = 8;
        printf("%d",x );
    }
    else if(-5 <= x && x <3)
    {
        x = x/1;
        printf("%d", x);
    }
    else if(3 < x && x <12)
    {
        x = (x*2) -4;
        printf("%d", x);
    }
    else if(x > 12)
    {
        x = 6 / ((x - 14)*x - 14);
        printf("%d", x);
    }
    
    


    return 0; 
}