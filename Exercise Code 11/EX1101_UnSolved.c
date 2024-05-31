#include <stdio.h>
//Making a function to add two number and compare then to the third number. 

int SunCompare(a, b, c);

int main(void){

    int num1,num2,num3; 

    printf("Enter a number 1: ");
    scanf("%d", &num1);

    printf("Enter a number 2: ");
    scanf("%d", &num2);

    printf("Enter a number 3: ");
    scanf("%d", &num3);

    SunCompare(num1,num2,num3);
    
    return 0;
}

int SunCompare(a,b,c){

    int sum; 
    sum = a + b;

    if(sum == c)
    {
        printf("%d %d",a ,b);
    }
    else
    {
        printf("%d %d", b, c);
    }

    
}