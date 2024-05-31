#include <stdio.h>

int main(void){

    int i, k, l;

    printf("Enter grades: "); 
    scanf("%d%d%d", &i, &k, &l);

    if(i <= k && i <= l)
    {
        printf("%d ", i);

            if(k < l)
              printf("%d %d", k, l );  
            else      
                printf("%d %d", l, k);         
    }
    else if(k < i && k < l)
    {

         printf("%d ", k);

            if(i < l)
                printf("%d %d ", i, l );
            else 
                printf("%d %d", l, i);
    }

    else 
    {
         printf("%d ", l);

            if(k < i)
                printf("%d %d", k, i );
            else 
                printf("%d %d", i, k);
    }
    

    return 0;
}