#include <stdio.h>

/*How many students have passed and how many have failed*/

int main(void){

    int no_students;
    double pass_percent, pass;

    printf("How many students: ");
    scanf("%d", &no_students); 

    printf("How many students passed: ");
    scanf("%lf", &pass);  

    pass = pass / 100; // convert pass rate to decimal 

    pass_percent = (pass * no_students) * 10; // get the percentage

    printf("Pass Rate = %lf%%\n", pass_percent);
    printf("Fail Rate = %lf%%\n", 100 - pass_percent ); // to get the number of failed students

    return 0;
}