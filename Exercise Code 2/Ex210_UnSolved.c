#include <stdio.h>

int main(void){

    float a = 8.27, b = 5.42;
    
    printf("%.2f/%.2f = %.0f remainder = %.2f ", a ,b , (int)a/b, a-(int)(a/b)*b);

    return 0;
}