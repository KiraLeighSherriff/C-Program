#include <stdio.h>
//To find out if a MAC address of unicast, milticasr, or broadcast

int main(void){

    unsigned int mac1, mac2, mac3, mac4, mac5, mac6; /*For entering the mac address*/

    printf("Enter MAC address: ");
    scanf("%x:%d:%d:%d:%d:%d:%d", &mac1, &mac2, &mac3, &mac4, &mac5, &mac6); 

    if(mac1 == 0xFF) /*IF the frist entry if FF, if not cheack if even or odd*/
    {
        printf("Broadcast");
    }
    else if((mac1 % 2 ) == 0 )//If the rember is 0 then it is even
    {
        printf("Unicast");
    }
    else if((mac1 % 2) == 1)//If rember is 1 then it is odd
    {
       printf("Multicast");
    }
    else
    {
        printf("Wrong Formate!!");//If the user has enter the wrong fomrate
    }
    

    return 0;
}