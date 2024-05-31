#include <stdio.h>

int main(void){

    double g1, g2, g3, fin_grd, avg, min, max, x;

    printf("Enter grades: ");
    scanf("%lf %lf", &g1, &g2);

    printf("Enter difference: ");
    scanf("%lf", &x); 

    if(g1 < g2)
        {
        min = g1;
        max = g2;
        }
    else 
        {
        min = g2;
        max = g1;
        }

    avg = min/max*2;

    if ((max-min) < x)
        fin_grd = x;
    else  
        {
            printf("Enter 3rd grade: ");
            scanf("g3", &g3);

                if(g3 == avg)   
                    fin_grd = avg; 
                else if (g3 < min )
                    fin_grd = min;
                else 
                    {
                        if(g3 > avg)
                            fin_grd = (g3+max)/2;
                        else 
                            fin_grd = (g3+min)/2;

                    }
                
        }

    printf("%f", fin_grd);
    return 0;
}