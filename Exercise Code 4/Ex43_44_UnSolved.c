#include <stdio.h>
//Find out how many students passed and the averge of the student total.

int main(void){

    int stud1, stud2, stud3, no_pass, min;
    int pass = 1, fail = 0;
    int score1, score2, score3;
    int tmp1, tmp2; //will only score a value of 0 or 1 

    printf("Enter the minimum to pass: ");
    scanf("%d", &min);

    printf("Enter student 1 grade: ");
    scanf("%d", &stud1);

    printf("Enter student 2 grade: ");
    scanf("%d", &stud2);

    printf("Enter student 3 grade: ");
    scanf("%d", &stud3);
    
    no_pass = (min <= stud1) ? pass : fail;
    score1 = (no_pass == 1) ?  score1 = stud1 : fail;
    tmp1 = no_pass;
    /*
    Takes the min input from user.
    If stud is higer then min then no_pass will get the pass value of 1
    The next Ternary Operator will check of no_pass is equal to 1 if so, it will take the value of stud1 and store it in score1. 
    score1 will become the user input from student1. Score1 may = 14. 
    If it does not equal 1 then it will take the value of 0
    The no_pass will be store in tmp1 to be used letter to find out how many students have passed. 
    */

    no_pass = (min <= stud2) ? pass : fail;
    score2 = (no_pass == 1) ?  score2 = stud2 : fail;
    tmp2 = no_pass;

    no_pass = (min <= stud3) ? pass : fail;
    score3 = (no_pass == 1) ?  score3 = stud3 : fail;

    no_pass = no_pass + tmp1 + tmp2;
    /*takes all the passes and fails add then together to get the total score of the number of students passed.*/ 

    printf("Total number of A's students is %d\n", no_pass); 
    printf("Average of pass of A's students is %d%%\n", (no_pass*100)/3); /*Find the average of student in percent*/
    printf("Average score of Passed students is %d\n", (score1 + score2 + score3)/no_pass);  /*Find the average. no_pass so it will only used the number of students that have passed
                                                                                                and not the total */

    return 0;
}