#include <stdio.h>

/* Encrypted a number using XOR ^*/

int main(void){

    int num, key;

    printf("Enter a key: ");
    scanf("%d", &key);

    printf("Enter number: ");
    scanf("%d", &num);

    num = num  ^ key;
    printf("Now encrtpted to %d\n", num);

    printf("You orginal %d\n", num ^ key);

    return 0;
}