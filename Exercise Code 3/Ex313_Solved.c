#include<stdio.h>

int main(void){

    int i; 
    float j; 

    printf("Enter a numeber to round: "); 
    scanf("%d", &i); 

    i = i + 5; 
    j = (float)i/10;
    i = (int)j *10;

    /*
    446 + 5 = 451
    451 / 10 = (float)45.1
    (int)45 * 10 = 450
    */

    printf("%d", i );

    return 0; 
}