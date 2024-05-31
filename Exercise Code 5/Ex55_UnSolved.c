#include <stdio.h>

int main(void){

    char ch = 156; //To get tehe £ sign

    double small, big;//Store the amount of bottles
    double s_price = 0.008, b_price = 0.02;//Price of the bottles
    double s_total, b_total, total, bottle_total;//getting the total of bottle brought
    double discount; //To score the discount for each catagory

    printf("Enter how many small bottle: ");
    scanf("%lf", &small);

    printf("Enter how many large bottle: ");
    scanf("%lf", &big);

    bottle_total = small + big; // get total of bottles

    s_total = small * s_price;// price of small bottles
    b_total = big * b_price; //price of big bottles

    total = s_total + b_total; //getting the total price  

    //printf("Cost will be %c%.2lf",ch, total);

    if((total > 600))
    {
        /*To find the discount of 20% when teh user buys more than £600 worth of bottles*/
        double tmp;
        discount = 0.2; 
        tmp = discount * total; 
        total = total - tmp; 

        printf("20%% discount for over %c600\n", ch);
        printf("Cost will be %c%.2lf",ch, total);

    }
    else if((total > 200) || (bottle_total > 300 ) )
    {
        /*To find the discount of 8% when teh user buys more than £200 or 3000 bottles*/
        double tmp;
        discount = 0.08; 
        tmp = discount * total; 
        total = total - tmp; 

        printf("8%% discount for over %c200 and over 3000 bottles\n" ,ch);
        printf("Cost is %c%.3f", ch ,total);
    }
    else 
    {
        /*Not met either*/
        printf("Cost = %c%.2lf", ch, total); 
    }



    return 0;
}