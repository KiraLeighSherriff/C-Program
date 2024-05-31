#include <stdio.h>

int main(void){

    char sex; 
    double hight; 

    printf("M of Male\nF for Female\n");
    printf("Enter M or F: ");
    scanf("%c", &sex);

    switch(sex)
    {

        case 'M': 

            printf("Enter hight in centremeters: ");
            scanf("%lf", &hight); 

            if (hight <= 170)
            {
                printf("Short");
            }
            else if (hight <= 185 )
            {
                printf("Average");
            }
            else 
                printf("Tall");
        break; 

        case 'F': 

            printf("Enter hight in centremeters: ");
            scanf("%lf", &hight);

            if(hight <= 160)
                printf("Short"); 
            else if(hight <= 175)
                printf("Average");
            else 
                printf("Tall");
        break; 

        default: 
                    printf("Error : Wrong Choise!!");
;        break;
    }


    return 0;
}