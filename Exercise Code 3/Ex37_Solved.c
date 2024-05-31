#include<stdio.h>

int main(void){

    float D1, D2, D3, tmp1, tmp2;

    printf("Enter 3 floats: ");
    scanf("%f%f%f", &D1,&D2,&D3);
    printf("Before right shift D1 = %f, D2 = %f, D3 = %f\n", D1,D2,D3);

    tmp1 = D3;
    tmp2 = D2;

    D2 = D1;
    D3 = tmp2;
    D1 = tmp1;

    printf("After right shift D1 = %f, D2 = %f, D3 = %f", D1,D2,D3);

return 0;

}