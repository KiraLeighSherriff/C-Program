#include <stdio.h>

int main(void){

    float dmi, height, weight;

    printf("Enter height in meter: ");
    scanf("%f", &height);

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    dmi = weight/(height*height);

    printf("BMI = %f\n", dmi);

    if(dmi < 20)
    {
        printf("Underwight\n");
    }
    else if(dmi <= 30)
    {
        printf("Normal wight\n");
    }
    else if(dmi <= 30)
    {
        printf("Overwight\n");
    }
    else if(dmi <= 40)
    {
        printf("Obse\n");
    }
    else 
    {
        printf("Extemely Obse\n");
    }

    return 0;
}