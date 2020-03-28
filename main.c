#include <stdio.h>
#include <dos.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

void shutDown(void);
void restart(void);
void menu(void);
void remoteShutdown(void);
void abortShutdown(void);
void logOff(void);
void enter(void);

void shutDown() //function to shutdown the computer
{
    printf("\nshuttingg down..\n");
    system("C:\\WINDOWS\\System32\\shutdown /s"); // executing the shutdown /s file inside the location in c drive.
    system("cls");                                // clears the previous screen
    menu();
}

void restart() // reboot the sustem with 30second countdown
{
    system("cls");
    printf("\nShutting down under 30 seconds ...");
    system("C:\\WINDOWS\\system32\\shutdown /r");
    menu();
}

void logOff() // log off current user
{
    system("cls");
    printf("\n Shutting down under 30 seconds... ");
    system("C:\\WINDOWS\\system32\\shutdown /l");
}

void remoteShutdown() // remote shutdown settings
{

    system("C:\\WINDOWS\\System32\\shutdown /i");
    system("cls");
    menu();
}

void abortShutdown() // abort the current shutdown process if already live.
{
    system("cls");
    printf("\n\n");
    system("C:\\WINDOWS\\System32\\shutdown /a");
    menu();
}

void enter()
{
    int x;
    printf("\n Enter your choice : ");
    scanf("%d", &x);

    switch (x)
    {

    case 1:
        shutDown();
        break;

    case 2:
        restart();
        break;

    case 3:
        logOff();
        break;

    case 4:
        remoteShutdown();
        break;

    case 5:
        abortShutdown();
        break;

    case 6:
        printf("\n Exiting... \n\n");
        printf("Exiting in about 3 seconds...\n");
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

    enter(); // function prompt the use to input the choice.
}

int main()
{

    int choice;

    menu();

    getch();
    return 0;
}