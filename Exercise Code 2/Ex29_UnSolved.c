#include <stdio.h>

int main(void){

    int a = 22, b = 8; 

    printf("%d/%d = %.2f remainder = %d", a ,b , (double)a/b, a-(a/b)*b );
                                                            /*a / b = c
                                                              c X b = d
                                                              a - d = remainder
                                                              */


    return 0; 
}