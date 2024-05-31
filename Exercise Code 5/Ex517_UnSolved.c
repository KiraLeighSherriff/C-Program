#include <stdio.h>

//Doing fraction calulations with switches and if statements

int main(void){

    double f1_dom, f1_num, f2_dom, f2_num;
    double cal1 = 0 , cal2 = 0;
    int choice;

    printf("Enter a numinator and denominator for 1st fraction: ");
    scanf("%lf%lf", &f1_num, &f1_dom);

    printf("Enter a numinator and denominator for 2nd fraction: ");
    scanf("%lf%lf", &f2_num, &f2_dom);

    printf("1 For addiction\n");
    printf("2 For subtraction\n");
    printf("3 For multiplication\n");
    printf("4 For division\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        
        if(f1_dom == f2_dom)
        {
            cal1 = f1_num + f2_num;

            printf("Addiction = %.2lf/%.2lf", cal1, f1_dom);
        }
        else
        {
            printf("Denominator need to be the same");
        }



        break;

    case 2:
        
        if(f1_dom == f2_dom)
        {
            cal1 = f1_num - f2_num;

            printf("Subtraction = %.2lf/%.2lf", cal1, f1_dom);
        }
        else
        {
            printf("Denominator need to be the same");
        }


        break;

    case 3:


        cal1 = f1_num * f1_dom;
        cal2 = f2_dom * f2_num;

        

        printf("Multipication is %.2lf\\%.2lf ", cal1, cal2);

        break;

    case 4:
        
        cal1 = f1_num * f2_dom;
        cal2 = f1_dom * f2_num;

        printf("Multipication is %.2lf\\%.2lf ", cal1, cal2);

        break;


    default:

        break;
    }


    return 0;
}