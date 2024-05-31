for(;;)
    {
        printf("Welcome to the Hotal!\n");
        printf("What sevices Would you like?\n");
        printf("Press 'a' or to see available room.\n");
        printf("Press 'b' to book a room.\n");
        printf("Press 'c' to cancel booking.\n");
        printf("Press 'e' to exit form Hotal.\n");
        printf("-----------------------------\n");
        printf("Enter the serive that you want: ");
        scanf("%c", &choice);
            if(choice == 'e' || choice == 'E')
                exit(0);