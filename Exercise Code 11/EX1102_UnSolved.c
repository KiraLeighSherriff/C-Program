#include <stdio.h>

/*
  Maths function of g(f(x))

*/

int CompositePos(int a);
int CompositeNeg(int b);

int main(void){

    int x; 

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x > 0)
        CompositePos(x);
    else if(x <= 0)
        CompositeNeg(x);

     return 0;
}

int CompositePos(int a){

    a = a*a + 2;  // g function
    a += a + 2;  //f function 

    printf("%d",a);

}

int CompositeNeg(int a){

    a = 7*a - 5; //g function
    a += -3*a + 7; // f function 

    printf("%d",a);

}