#include <stdio.h>
#define MAX 10

int duplicate(int num[]);

int main(void){

    int number[MAX];

    for(int i = 0; i < MAX; i++){
        printf("Enter number: ");
        scanf("%d", &number[i]);
    }


    printf("Most common number: %d", duplicate(number));

    return 0;
}

int duplicate(int num[]){


    int amount, times, temp; 
    int* mostUsed;
    amount = temp =0 ; 

    for(int i = 0; i < MAX; i++){
        for(int l = 0; l < MAX; l++){
            if(num[i] == num[l])
                amount++;
        }

        if(amount > temp){
            mostUsed = &num[i];
            times = amount;
        }

        temp = amount;
        amount = 0;
    }

    return *mostUsed;

}