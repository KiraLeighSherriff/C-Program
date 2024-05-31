#include <stdio.h>

//displays the month and day
//If days go over the into the next month it will still display the right date.

int main(void){

    enum months {January = 1, Febuary, March, April, May, June, July, Augest, September, October, November, December} mon;
    int day;
    char sel;

    printf("Enter months: ");
    scanf("%d", &mon);

    if (mon == 1)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 31)
        {
            day = day - 31;//to find out how many days the user has added that is over the month limint
            //days change to 30 depending on the month
            mon++;//if the day fo over it will add another month
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }  
    //If the is the same or all the other just different for febuary for leap year

    }
    else if(mon == 2)
    {

        printf("Enter days: ");
        scanf("%d", &day);

        int FOR_FEB = day; //To store the day since it displays wrong number when used in leap year
               
            if(day == 29)
                {
                    printf("%d/%d", day, mon); 
                }

                if (day < 29)
                {
                    printf("%d/%d", day, mon);
                }

                    if(day > 29)
                    {
                        /*To ask if or the leap year
                        so you know if to take away 28 or 29 when they go over the limit of febuary*/
                        printf("Is it leap year Y(yes) OR N(no): ");
                        scanf("%s", &sel);

                        

                        if(sel == 'Y' || sel == 'y')
                        {
                            FOR_FEB = FOR_FEB - 29;
                            mon++;
                            printf("%d/%d", FOR_FEB, mon);
                        }
                        else if(sel == 'N' || sel == 'n')
                        {
                            FOR_FEB = FOR_FEB - 28;
                            mon++;
                            printf("%d/%d", FOR_FEB, mon);
                        }
                    }

    }
     if (mon == 3)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 31)
        {
            day = day - 31;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 4)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 30)
        {
            day = day - 30;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 5)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 31)
        {
            day = day - 31;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 6)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 30)
        {
            day = day - 30;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 7)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 31)
        {
            day = day - 31;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 8)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 31)
        {
            day = day - 31;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 9)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 30)
        {
            day = day - 30;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 10)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 31)
        {
            day = day - 31;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 11)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 30)
        {
            day = day - 30;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
     if (mon == 12)
    {
        printf("Enter days: ");
        scanf("%d", &day);

        if(day >= 31)
        {
            day = day - 31;
            mon++;
            printf("%d/%d", day, mon);
        }
        else
        {
        printf("%d/%d", day, mon);
        }    
    }
    
    return 0;
}