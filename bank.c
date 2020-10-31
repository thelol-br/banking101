// Libraries
#include <stdio.h>
#include <stdlib.h>

// Declaration of methods
void header(void);
void menu(void);
int manage(void);
void createAcc(void);

// Declaration of vars
int menuOption;
int manageOption;

// Main method
int main(void)
{
    // Clear console
    //system("clear");
    // Calls header and menu (just text), asks for an option at menu an assign it to menuOption var.
    header();
    menu();
    scanf("%d", &menuOption);

    // Check the option choose and run code
    switch (menuOption)
    {
    case 1:
        manage();
        break;
    
    default:
        break;
    }
    return 0;
}

// Header method
void header(void)
{
    printf("\n\t\t\t\tC Bank\n");
    printf("\t\t\tChoose your option.\n");
}

// Menu method
void menu(void)
{
    printf("\n\t\t\t[1] Manage accounts.\n");
}

// Manage account method
int manage(void)
{
    // Create
    // Read
    // Update
    // Delete
    //system("clear");
    header();
    printf("\n");
    printf("\t\t\t[1] Create account.\n");
    printf("\t\t\t[2] Update account.\n");
    printf("\t\t\t[3] Delete account.\n");
    printf("\t\t\t[4] List all accounts.\n");
    printf("\t\t\t[5] Return to main menu.\n");
    scanf("%d", &manageOption);

    switch (manageOption)
    {
    case 1:
        createAcc();
        break;
    case 5:
        main();
        break;    
    default:
        break;
    }
    return 0;
}

void createAcc(void)
{
    // Aux vars
    char *fullName = malloc(255);
    char *email = malloc(255);
    char *address = malloc(255);
    int key;
    //system("clear");
    header();
    printf("\n");
    printf("\t\t\t[1] Create account.\n");
    printf("\n\n\n");
    printf("What's your full name?\n");
    // Scanf bellow it's unique and to fully undestand what happens, need to learn assembly
    scanf(" %254[^\n]", fullName);
    printf("%s\n", fullName);
}