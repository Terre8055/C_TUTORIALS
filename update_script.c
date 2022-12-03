#include<stdio.h>
#include<conio.h>

int main()
{
    char name[200]; 
    int num1,num2,num3,choice;


    printf("Enter your name: \n"); //name input from user
    scanf("%s", &name);
    printf("Hello Welcome to the Grade Checker app %s\n", name);

    // Interface opens for input choice from user

    printf("Enter\n 1 for Grade Checker \n 2 for Upload Assignments \n 3 for Download Student logs \n");
    scanf("%d", &choice);

    // input choice

    switch(choice)
    {
        case 1:
        printf("Welcome to the Grade Checker app %s", name);
        break;

        case 2:
        printf("Carefully upload Assignment on Blackboard");
        break;

        case 3:
        printf("Download student logs after paying fees");
        break;

        default:
        printf("Enter a valid choice");

    }

    return 0;


    
}
