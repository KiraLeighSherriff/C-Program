#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *arr[3], i, j, k, sum;
    sum = 0;

    for(int p = 0; p < 3;p++){
        printf("Enter a number: ");
        scanf("%d", &arr[p]);
    }


    i = arr[0];
        if(i%2==0)
            sum += i;
    j = arr[1];
        if(j%2==0)
            sum += j;
    k = arr[2];
        if(k%2==0)
           sum += k;

    printf("Sum of even numbers is %d\n", sum);

    for(int p = 0; p < 3;p++){  
        printf("%d\n", arr[p]);
    }
    
    return 0;
}