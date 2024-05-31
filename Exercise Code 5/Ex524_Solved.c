#include <stdio.h>

int main(void){

    char class;
    double weight, cost = 0; 

    printf("E For Ecomany\n");
    printf("B for Bussiness\n");
    printf("V for VIP\n");
    printf("Enter the letter: ");
    scanf("%c", &class); 

    switch(class)
    {

        case 'E': 

            printf("Enter weight (lb): ");
            scanf("%lf", &weight); 

            if(weight > 40)
            {
                cost = 22.5 + 2* (weight - 40); 
            }
            else 
            {
               cost = (weight - 25) * 1.5;      
            } 
            

        break; 

        case 'B':

            printf("Enter weight (lb): ");
            scanf("%lf", &weight);
    
             if(weight > 50)
            { 
                cost = 18.75 + 1.50 * (weight - 50);
              
            }
            else 
            {
                cost = 1.25 * (weight - 35);
            }

        break; 

        case 'V': 

        printf("Enter weight (lb): ");
        scanf("%lf", &cost);

        if(weight < 60)
            cost = 30;

        break;    

        default: 
            printf("Enter the correct formate!!!"); 
    }

    printf("cost = %.2lf", cost );

    return 0;
}