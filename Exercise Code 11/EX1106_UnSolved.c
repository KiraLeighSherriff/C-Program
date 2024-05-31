#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int order(int check[]);

int main(void){

    int number[10], i, flag;

    srand(time(NULL));
    for(i = 0; i < 10;i++){
        number[i] = rand() % (20-5+1)+5; 
    }

    for(i = 0; i < 10;i++){
        printf("%d\n", number[i]);
    }

    flag = order(number);

    if(flag == 1){
        printf("The array is store in ascending order.");
    }
    else if(flag == 2)
    {
        printf("The array is store in desending order.");
    }

    return 0;
}

int order(int check[]){

    int k, i, l;
    k = l = 0;

    for(int i = 0 ; i < 10 - 1 ; i++ )
    {
        if( check[i] < check[i+1] )
        {
            k++;
        }
    }

   for(int i = 0 ; i < 10 - 1 ; i++ )
    {
        if( check[i] > check[i+1] )
        {
            l++;
        }
    }

    if(l == 9){
        return 1;
    }
    else if(k == 9){
        return 2;
    }
    else{
        printf("The array has no order");
    }
    

}