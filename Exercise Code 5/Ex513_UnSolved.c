#include <stdio.h>

//put in time. How mnay houes left to midnight

int main(void){

    int hour, min, sec;

    printf("Enter hours: ");
    scanf("%d", &hour);

    printf("Enter minute: ");
    scanf("%d", &min);

    printf("Enter second: ");
    scanf("%d", &sec);

    if(sec <= 60)
    {
     sec = 60 - sec;
    }
    else 
    {
        printf("ERROR : Enter between 0 and 60!!");
    }

    if(min <= 60)
    {
     min = 60 - min;
    }
    else 
    {
        printf("ERROR : Enter between 0 and 60!!");
    }
    
    if(hour <= 24)
    {
     hour = 24 - hour;;
    }
    else 
    {
        printf("ERROR : Enter between 0 and 24!!");
    }
     
    printf("%d:%d:%d Left to Midnight", hour, min, sec);




    return 0;
}