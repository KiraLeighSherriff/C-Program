#include<stdio.h>

#define size 100

int main(void){

    int i, max_pos, min_pos;
    float sum, max_grd, min_grd, grade[size];

    sum = max_pos = min_pos = 0;
    max_grd = -1;
    min_grd = 11;

    //printf("Enter a grade between [0-10]\n");

    for(i = 1; i < size; i++)
    {
        printf("Enter a grade for student %d: ", i);
        scanf("%f", &grade[i]);

            while(grade[i] < 0 || grade[i] > 10)
                {
                    printf("ERROR - Enter New grade for student %d between [0-10]: ", i);
                    scanf("%f", &grade[i]);
                }
            if(grade[i] > max_grd)
                {
                    max_grd = grade[i];
                    max_pos = i;
                }
            if(grade[i] < min_grd)
                {
                    min_grd = grade[i];
                    min_pos = i;
                }
        sum += grade[i];
    }
    printf("Higest grade was by student %d and was %0.f\n", max_pos, max_grd);
    printf("Lowest grade was by student %d and was %0.f\n", min_pos, min_grd);
    printf("Average of all Students if %0.2f\n", sum/size);


    return 0;
}