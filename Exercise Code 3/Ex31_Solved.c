#include<stdio.h>

int main(void){

    char ch; 
    int i;
    float k;

    printf("Enter 1 character, 1 intager, 1 float: ");
    scanf("%c %d %f", &ch, &i, &k);
    printf("The value are %c, %d. %f", ch ,i ,k);

    return 0;
}