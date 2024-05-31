#include <stdio.h>
//Find out how many studence have a score between 8 and 10

int main(void){

    double grd_ty, grd_lb, total = 0; 

//Student 1 --------------------------------------------

    printf("Enter Theory grade 1: ");
    scanf("%lf", &grd_ty);

    printf("Enter Lab grade 1: ");
    scanf("%lf", &grd_lb);

    grd_lb = (grd_lb*0.3) + (grd_ty*0.7);//To Cal the total grade. 
    (8 < grd_lb && grd_lb < 10 ) ? total++ : total;//If total is between 8 and 10 then 1 is added to total if not 0 is added.

//Student 2 --------------------------------------------

    printf("Enter Theory grade 2: ");
    scanf("%lf", &grd_ty);

    printf("Enter Lab grade 2: ");
    scanf("%lf", &grd_lb);

    grd_lb = grd_lb*0.3 + grd_ty*0.7;
    (8 < grd_lb && grd_lb < 10 ) ? total++ : total;

//Student 3 --------------------------------------------

    printf("Enter Theory grade 3: ");
    scanf("%lf", &grd_ty);

    printf("Enter Lab grade 3: ");
    scanf("%lf", &grd_lb);

    grd_lb = grd_lb*0.3 + grd_ty*0.7;
    (8 < grd_lb && grd_lb < 10 ) ? total++ : total;

    printf("Score between 8 and 10 = %0.lf", total);

    return 0;
}