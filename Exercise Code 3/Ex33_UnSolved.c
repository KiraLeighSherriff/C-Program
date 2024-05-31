#include <stdio.h>

/*The age of the father when the son doubles in age*/

int main(void){

    int father, son; 

    printf("Age of father: ");
    scanf("%d", &father);

    printf("Age of son: ");
    scanf("%d", &son); 

    printf("Double of the father and son age will be %d and %d", father+son, son*2);
 
    return 0;
}