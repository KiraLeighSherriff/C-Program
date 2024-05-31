#include <stdio.h>

/*Code use make a duplicate of the number 
12 with become 1122*/

int main(void){

    int i, r;

    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    r = i; //save i into r
 
    i = i/10; // divides i by 10
    i = (i * 10) + i; //times i by 10 then adds i
    //this is to get the 10 unit duplicate

    r = r % 10; //mod to get the remanber of 12 by 10 = 2
    r = (r * 10) + r;// time 2 by 10 then add 2
    //used are as it stores the orginal input number


    printf("%d%d", i, r);

    return 0; 
}
