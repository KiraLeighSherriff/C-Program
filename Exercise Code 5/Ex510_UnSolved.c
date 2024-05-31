#include <stdio.h>
//Flips the number so 1234 will become 4321
//If the flip number mtach each other tthan teh program will desplay true 

int main(void){

    int i, number; 
    int Reminder, Reverse = 0 ;

    printf("Enter 4 digit number: ");
    scanf("%d", &i);

    number = i;

    while(number > 0)
    {

     Reminder = number %10;
     Reverse = Reverse *10+ Reminder;
     number = number /10;
    }

    (i == Reverse) ? printf("The reversed number matches!!") :  printf("Number do not match");

    return 0;
}