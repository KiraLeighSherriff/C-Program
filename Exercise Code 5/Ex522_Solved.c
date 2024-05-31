#include <stdio.h>

int main(void){

    int sel; 
    double len;

    printf("Enter 0 for Square\nEnter 1 for circle:  ");
    scanf("%d", &sel);


    switch(sel)
    {
    
        case 0: 

            printf("Enter the lengh the sqaure: ");
            scanf("%lf", &len); 

            printf("The Area is %lf", len*len);

        break; 

        case 1: 

            printf("Enter the radius if a circle: ");
            scanf("%lf", &len); 

            printf("The area id %lf", 3.14*len*len);
        break;

        default: 

            printf("Select the correct number!!!");
        break; 
    }
    


    return 0;
}