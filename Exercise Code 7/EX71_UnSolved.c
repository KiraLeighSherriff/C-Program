#include <stdio.h>

#define student 100

int main(void){

    int stud_grd[student], cnt, pos;
    float small_num = 10, large_num = 1;

    pos = 0;
    int i;

    for(i = 0; i < student; i++)
    {
        printf("\nEnter Student %d grade: ", pos);
        scanf("%d", &stud_grd[i]);
        pos++;
    }
  
    printf("Enter the number to see the amount of student with that grade bracket.\n");
    printf("The frist numberhas to be the smallist.\n");

    do{
        printf("\nEnter starting bracket number: ");
        scanf("%f", &small_num);
        printf("\nEnter Ending bracket number: ");
        scanf("%f", &large_num);

            if(small_num > large_num)
                printf("\nMake Sure the starting number is the smallist!!!\n");
    }while(small_num > large_num);

    for(i = 0; i < student; i++)
    {
        if((stud_grd[i] > small_num) && (stud_grd[i] < large_num))
        {
            cnt++;
        }
    }

    printf("\n\nNumber of student between %0.f & %0.f are %d", small_num, large_num, cnt);



    return 0;
}