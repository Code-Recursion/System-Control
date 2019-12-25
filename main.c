#include <stdio.h>
#include <dos.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

void sdown(void);
void restart(void);
void menu(void);
void manual(void);
void abortsdown(void);
void logoff(void);
void enter(void);

void sdown() //function to shutdown the computer
{
    printf("\nshuttingg down..\n");
    system("C:\\WINDOWS\\System32\\shutdown /s");
    system("cls");
    menu();
}

void restart()
{
    system("cls");
    printf("\nShutting down under 30 seconds ...");
    system("C:\\WINDOWS\\system32\\shutdown /r");
    menu();
}

void logoff()
{
    system("cls");
    printf("\n Shutting down under 30 seconds... ");
    system("C:\\WINDOWS\\system32\\shutdown /l");
}

void manual()
{

    system("C:\\WINDOWS\\System32\\shutdown /i");
    system("cls");
    menu();
}

void abortsdown()
{
    system("cls");
    printf("\n\n");
    system("C:\\WINDOWS\\System32\\shutdown /a");
    menu();
}

void enter() //to call menu
{
    int x;
    printf("\n Enter your choice : ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        sdown();
        break;

    case 2:
        restart();
        break;

    case 3:
        logoff();
        break;

    case 4:
        manual();
        break;

    case 5:
        abortsdown();
        break;

    case 6:

        printf("\n Exiting... \n\n");
        printf("Exiting in 3 seconds...\n");
        Sleep(3000);
        exit(1);

    default:
        printf("\ninvalid choice Try again \n");
        menu();
    }
}

void menu() //menu, contais all available options
{

    system("color 1F"); //set output color to blue bgrnd and white foreground
    printf("\n");
    printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SYSTEM CONTROL \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \xB2");
    printf("\n _______________________________________________________________");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Shutdown Computer \t\t\t|");
    printf("\n|\t\t\t 2. Restart Computer \t\t\t|");
    printf("\n|\t\t\t 3. Log off \t\t\t\t|");
    printf("\n|\t\t\t 4. Manual Shutdown Settings\t\t|");
    printf("\n|\t\t\t 5. Abort Shutdown \t\t\t|");
    printf("\n|\t\t\t 6. Exit \t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_______________________________________________________________\xB2\n");

    enter();
}

int main()
{

    int choice;

    menu();
    /*
        printf("\n Enter your choice : ");
        scanf("%d", &choice);
        enter(choice);
   */

    getch();
    return 0;
}