#include <stdio.h>

int main(void){

    int i,l,p;
    int choice;
    int between = 0;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &i, &l, &p);

    printf("1 For cheaking if number are differnt\n");
    printf("2 For cheaking if number two are equal\n");
    printf("3 For cheaking how many number are between -5 and 5\n");

    printf("Enter Mode: ");
    scanf("%d", &choice);

    switch (choice)
    {

        case 1:

            if((i != l) && (i != p) && (p != l))
            {
                printf("The number are different");
            }
            else 
            {
                printf("The number are not different");
            }

        break;

        case 2: 

            if((i == l) || (i == p) || (p == l))
            {
                  printf("The number are similer");
            }
            else 
            {
                printf("The number are not similer");
            }
            
        break;

        case 3:


            if((i >= -5) && (i <= 5))
            {
               between++; 
            }

             if((l >= -5) && (l <= 5))
            {
               between++; 
            }

             if((p >= -5) && (p <= 5))
            {
               between++; 
            }

            printf("%d are between -5 and 5", between);
        
        break;
    }




    return 0;
}