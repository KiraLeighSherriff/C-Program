#include<stdio.h>

/*Round the number to the nearist 100*/

int main(void){

    int i; 
    float j; 

    printf("Enter a numeber to round: ");
    scanf("%d", &i); 

    i = i + 50; 
    j = (float)i/100;
    i = (int)j *100;

    /*
    40 + 50 = 90
    90 / 100 = (float)0.9
    (int)0.09 * 10 = 0
    */

    printf("%d", i );

    return 0; 
}
                                  