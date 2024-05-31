#include <stdio.h>
//Flipping the array 

int main(void){

    double arr[] = {1.3, -4.1, -3.8, 9.4, 2.5}, *p1 = arr, *p2 = arr+4;  
    double temp; 

    for(int o = 0; o < 2; o++)
    {
        temp = *(p1+o);
        *(p1+o) = *(p2-o);
        *(p2-o) = temp;
    }
    
    /*temp = *p2;
    *p2 = *p1;
    *p1 = temp;

    temp = *(p1+1);
    *(p1+1) = *(p2-1);
    *(p2-1) = temp;*/

    for(int i = 0; i < 5; i++)
        printf("%lf ",arr[i] );


    return 0;
}