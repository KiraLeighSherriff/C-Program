#include <stdio.h>
#include <stdlib.h>

#define ROWS 11
#define COLS 51

int main(void){

    int rooms[ROWS][COLS], available; 
    char choice;
    int wing_num, room_num;
    int loop_row, loop_col;

    wing_num = room_num = 0;

    /*reason for this code. 
    The 0 in the availablty table will mean the the room is free
    if the room has a 1 that mean that the room is taken.
    since array are filled with ramdon numbers they been to be placed by 
    a value that has meaning the 0's.*/

     for(loop_row = 0; loop_row < ROWS; loop_row++)
        {
            for(loop_col = 0; loop_col < COLS; loop_col++)
            {
                rooms[loop_row][loop_col] = 0;
            }
        }

    /*Giving the user the list of feacture that they can 
    pick form. Enter the letter A B C or to to get each feacture*/

    
    for(;;)
    {
        choice = 'p';

        /*goto to function only used in Case C for if the user enter the wrong number
        they want be stuck in a loop*/

        Correct: 
        printf("Welcome to the Hotal!\n");
        printf("What sevices Would you like?\n");
        printf("Press 'a' or to see available room.\n");
        printf("Press 'b' to book a room.\n");
        printf("Press 'c' to cancel booking.\n");
        printf("Press 'e' to exit form Hotal.\n");
        printf("-----------------------------\n");
        printf("Enter the serive that you want: ");
        scanf(" %c", &choice);
            if(choice == 'e' || choice == 'E')
                exit(0);
        
    
    switch(choice)
    {
        //To look at the room in the hotal that are availble
        case 'A': case 'a':

            printf("\n");

            //will print the table in the termail
                for(loop_row = 1; loop_row < ROWS; loop_row++)
                {
                    printf("Wing %d  ", loop_row);
                        for(loop_col = 1; loop_col < COLS; loop_col++)
                        {
                            printf("|%d|", rooms[loop_row][loop_col]);
                        }
                    printf("\n");
                }

            printf("0 = free : 1 = Taken\n");
            
       continue;

        //to book a room in the hotal
        case 'B': case 'b':

            printf("Wings are from 1 - 10.\n");
            printf("Rooms room 1 - 50.\n");
            
            //getting the room and wing number from customer
            do
            {
                printf("Enter the wing number: ");
                scanf("%d", &wing_num);
            }while((wing_num <= -1) || (wing_num >= 11));

            do
            {
                printf("Enter the room number: ");
                scanf("%d", &room_num);
            }while((room_num <= -1) || (room_num >= 51));

            rooms[wing_num][room_num] = 1; // 1 means that the room is booked

        continue;

        //to cancel a book that was booked
        case 'C': case 'c':

            printf("Enter your wing and room number.\n");

            do
            {
                printf("Enter the wing number: ");
                scanf("%d", &wing_num);
            }while((wing_num <= -1) || (wing_num >= 11));

            do
            {
                printf("Enter the room number: ");
                scanf("%d", &room_num);
            }while((room_num <= -1) || (room_num >= 51));

            if(rooms[wing_num][room_num] == 1)
                {
                    rooms[wing_num][room_num] = 0;
                    printf("Hotal Room has been canceled\n");
                }
                else if(rooms[wing_num][room_num] == 0)
                {
                    printf("Please select the right wing and room.\n\n");
                    goto Correct; // For if the room was not booked into
                }

        continue;

        }
    
    }
    return 0;
}