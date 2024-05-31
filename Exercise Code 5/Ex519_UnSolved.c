#include <stdio.h>

int main(void){

    int v_moto = 1, v_auto = 2, choice ;
    int days ,cost;  
    char ch = 156; 

    printf("\n\n1 For Moto with cyblish <= 100\n");
    printf("2 For Moto with cyblish > 100\n\n");

    printf("3 For Auto with cyblish <= 1000\n");
    printf("4 For Auto with cyblish > 1000\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        
        printf("Enter days: ");
        scanf("%d", &days);

            if(days > 0 && days <= 2)
            {
                cost = 20;
                printf("cost = %c%d", ch,cost); 
            }
            else if(days >=3 && days > 5)
            {
                cost = 25 + 20;  
                printf("cost = %c%d", ch,cost);   
            }
            else
            {
                cost = (20 * 2) + 25;  
                printf("cost = %c%d", ch,cost);   
            }
        
        break;

    case 2:
        
         printf("Enter days: ");
        scanf("%d", &days);

            if(days > 0 && days <= 2)
            {
                cost = 40;
                printf("cost = %c%d", ch,cost); 
            }
            else if(days >=3 && days > 5)
            {
                cost =  40 + 35;  
                printf("cost = %c%d", ch,cost);   
            }
            else
            {
                cost = 40 + 35 + 30;  
                printf("cost = %c%d", ch,cost);   
            }

        break;

    case 3:

        printf("Enter days: ");
        scanf("%d", &days);
        
        if(days > 0 && days <= 2)
            {
                cost = 60;
                printf("cost = %c%d", ch,cost); 
            }
            else if(days >=3 && days > 5)
            {
                cost =  60 + 55;  
                printf("cost = %c%d", ch,cost);   
            }
            else
            {
                cost = 60 + 55 + 50;  
                printf("cost = %c%d", ch,cost);   
            }

        break;

    case 4:

        printf("Enter days: ");
        scanf("%d", &days);
        
        if(days > 0 && days <= 2)
            {
                cost = 80;
                printf("cost = %c%d", ch,cost); 
            }
            else if(days >=3 && days > 5)
            {
                cost =  80 + 70;  
                printf("cost = %c%d", ch,cost);   
            }
            else
            {
                cost = 80 + 70 + 60;  
                printf("cost = %c%d", ch,cost);   
            }
        
        break;
    }
    
       


    return 0;
}