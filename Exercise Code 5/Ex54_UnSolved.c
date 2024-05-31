#include <stdio.h>

int main(void){

    int i, k ,p, sum, six;
    //six for mulitply of six

    printf("Enter 3 intages: ");
    scanf("%d%d%d", &i, &k, &p);

    sum = i + k;

    if(sum == p)   
        {   
            printf("Sum of frist two is equal to the thrid input\n");
            printf("%d %d ", sum , p);
        }
        else 
        {
            printf("Enter new intagers: ");
            scanf("%d%d%d", &i, &k, &p);

            printf("How many time they go into six");
            
            printf("%d\n", i/6);
            printf("%d\n", k/6);
            printf("%d\n", p/6);

        }

    return 0;
}