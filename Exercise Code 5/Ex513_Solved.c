#include <stdio.h>

int main(void){

    int a1, a2, a3 ,a4;
    int b1, b2, b3, b4;

    printf("Enter IP adress 1: ");
    scanf("%d.%d.%d.%d", &a1,&a2,&a3,&a4);

    printf("Enter IP addess 2: ");
    scanf("%d.%d.%d.%d", &b1,&b2,&b3,&b4);

    if(a1 > 127)
        {
        if(a1 == b1)
            printf("Class A Correct formate used"); 
        else 
            printf("Class A Wrong formate used");
        }

    else if(a1 > 192)
        {
        if(a1 == b1 && a2 == b2)
            printf("Classs B Correct formate used"); 
        else 
            printf("Class B Wrong formate used");
        }

     else if(a1 > 224)
        {
        if(a1 == b1 && a2 == b2 && a3 == b3)
            printf("Classs C Correct formate used"); 
        else 
            printf("Class C Wrong formate used");
        }
        
    else 
        printf("Error wrong class!!");

    
    return 0;
}