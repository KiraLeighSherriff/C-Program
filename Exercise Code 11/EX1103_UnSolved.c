#include <stdio.h>

int between(int a, int b);

int main(void){

    int a,b;

    printf("Enter starting number: ");
    scanf("%d", &a);

    do{
        printf("Enter ending number(more then a): ");
        scanf("%d", &b);
    }while(a > b);

    between(a,b);

    return 0;
}

int between(int a, int b){
    int count, num;

     for(int i =0; i < 100;i++){
        printf("Enter %d number: ", i);
        scanf("%d",&num);

        if(num > a && num < b)  
            count++;
}
    printf("%d a between %d and %d", count, a,b);
}