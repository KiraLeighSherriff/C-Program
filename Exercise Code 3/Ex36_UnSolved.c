#include <stdio.h>

/*Add and Decimal number Hexdecial number and octal number together*/

int main(void){

    int total;
    unsigned int oct , dec, hex; 

    printf("Enter a Octal number: ");
    scanf("%o", &oct);

    printf("Enter a Hexdecimal number: ");
    scanf("%x", &hex);

    printf("Enter a Decimal number: ");
    scanf("%d", &dec);

    total = dec + oct + hex; 

    printf("%d", total);

    return 0; 
}