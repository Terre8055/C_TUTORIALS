#include <stdio.h>

int main()
{

    int subject[8]; // store 8 variables as an array instead of listing them in multiples
    char name[200];
    int num[4]; // declared array to store 4 nums
    int choice;
    int i;
    int token;
    // int CWA;
    int total_scores = 0;
    float avg;

    printf("WELCOME TO GRADE CHECKER APP\nENTER YOUR SECRET EXAM CODE\n");

    do
    {
        /* code */
        scanf("%d", &token);
        printf("\nYour Token is %d\n", token);

    } while (token >= 26);

    // if(token <=25)

    printf("\nStudent login Successfully\nClick Continue to Check Grade\n");

    // input student name

    printf("Enter your name: \n"); // name input from user
    scanf("%s", &name);
    printf("Hello Welcome to the Grade Checker app %s\n", name);

    // Interface opens for input choice from user

    printf("Enter\n 1 for Grade Checker \n 2 for Upload Assignments \n 3 for Download Student logs \n");
    scanf("%d", &choice);

    // input choice

    switch (choice)
    {
    case 1:
        printf("Welcome to the Grade Checker app %s\n", name);
        break;

    case 2:
        printf("Carefully upload Assignment on Blackboard\n");
        break;

    case 3:
        printf("Download student logs after paying fees\n");
        break;

    default:
        printf("Enter a valid choice\n");
    }

    printf("\nEnter Scores in the following format\nScience\nMaths\nEnglish\nSocial\nGovt\nGeog\nEmaths\nEcons\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &subject[i]); // getting 8 subject scores
    }

    for (i = 0; i < 8; i++)
        printf("Your scores are %d\n", subject[i]);

    for (i = 0; i < 8; i++)
    {
        total_scores = total_scores + subject[i];
    }

    avg = (total_scores / 8);
    printf("Average is : %.2f\n", avg);

    if (avg >= 50 && avg <= 100)
        printf("PASSED\n");

    else if (avg < 50)
        printf("Failed\n");

    else
        printf("Enter Valid Scores to Check Grade\n");

    /*printf("Enter Maths score\n");

    //take score input from user

    scanf("%d", &Maths);

    if(Maths <=100 && Maths >=90)
    printf("A+ EXCELLENT\n");
    //printf("Maths = %d\n", Maths);

    else if(Maths < 90 && Maths >=80)
    printf("A- VERY GOOD\n");

    else if(Maths < 80 && Maths >=70)
    printf("B+ GOOD\n");

    else if(Maths < 70 && Maths >=60)
    printf("B- GOOD\n");

    else if(Maths < 60 && Maths >=50)
    printf("C PASSED\n");

    else if(Maths < 50 && Maths >=40)
    printf("C- SATISFACTORY\n");

    else if(Maths < 40)
    printf("D FAILED\n");

    else
    printf("Input a valid score: \n");



    printf("Enter Science score\n");

    //take score input from user

    scanf("%d", &Science);

    if(Science <=100 && Science >=90)
    printf("A+ EXCELLENT\n");
    //printf("English+Maths = %d\n", English+Maths);

    else if(Science < 90 && Science >=80)
    printf("A- VERY GOOD\n");

    else if(Science < 80 && Science >=70)
    printf("B+ GOOD\n");

    else if(Science < 70 && Science >=60)
    printf("B- GOOD\n");

    else if(Science < 60 && Science >=50)
    printf("C PASSED\n");

    else if(Science < 50 && Science >=40)
    printf("C- SATISFACTORY\n");

    else if(Science < 40)
    printf("D FAILED\n");

    else
    printf("Input a valid score: \n");


    printf("Enter Social score\n");

    //take score input from user

    scanf("%d", &Social);

    if(Social <=100 && Social >=90)
    printf("A+ EXCELLENT\n");

    else if(Social < 90 && Social >=80)
    printf("A- VERY GOOD\n");

    else if(Social < 80 && Social >=70)
    printf("B+ GOOD\n");

    else if(Social < 70 && Social >=60)
    printf("B- GOOD\n");

    else if(Social < 60 && Social >=50)
    printf("C PASSED\n");

    else if(Social < 50 && Social >=40)
    printf("C- SATISFACTORY\n");

    else if(Social < 40)
    printf("D FAILED\n");

    else
    printf("Input a valid score: \n");

    printf("Enter English score\n");

    //take score input from user

    scanf("%d", &English);

    if(English <=100 && English >=90)
    printf("A+ EXCELLENT\n");

    else if(English < 90 && English >=80)
    printf("A- VERY GOOD\n");

    else if(English < 80 && English >=70)
    printf("B+ GOOD\n");

    else if(English < 70 && English >=60)
    printf("B- GOOD\n");

    else if(English < 60 && English >=50)
    printf("C PASSED\n");

    else if(English < 50 && English >=40)
    printf("C- SATISFACTORY\n");

    else if(English < 40)
    printf("D FAILED\n");

    else
    printf("Input a valid score: \n");


    printf("Enter Geog score\n");

    //take score input from user

    scanf("%d", &Geog);

    if(Geog <=100 && Geog >=90)
    printf("A+ EXCELLENT\n");

    else if(Geog < 90 && Geog >=80)
    printf("A- VERY GOOD\n");

    else if(Geog < 80 && Geog >=70)
    printf("B+ GOOD\n");

    else if(Geog < 70 && Geog >=60)
    printf("B- GOOD\n");

    else if(Geog < 60 && Geog >=50)
    printf("C PASSED\n");

    else if(Geog < 50 && Geog >=40)
    printf("C- SATISFACTORY\n");

    else if(Geog < 40)
    printf("D FAILED\n");

    else
    printf("Input a valid score: \n");



    printf("Enter Govt score\n");

    //take score input from user

    scanf("%d", &Govt);

    if(Govt <=100 && Govt >=90)
    printf("A+ EXCELLENT\n");

    else if(Govt < 90 && Govt >=80)
    printf("A- VERY GOOD\n");

    else if(Govt < 80 && Govt >=70)
    printf("B+ GOOD\n");

    else if(Govt < 70 && Govt >=60)
    printf("B- GOOD\n");

    else if(Govt < 60 && Govt >=50)
    printf("C PASSED\n");

    else if(Govt < 50 && Govt >=40)
    printf("C- SATISFACTORY\n");

    else if(Govt < 40)
    printf("D FAILED\n");

    else
    printf("Input a valid score: \n");


    printf("Enter Emaths score\n");

    //take score input from user

    scanf("%d", &Emaths);

    if(Emaths <=100 && Emaths >=90)
    printf("A+ EXCELLENT\n");

    else if(Emaths < 90 && Emaths >=80)
    printf("A- VERY GOOD\n");

    else if(Emaths < 80 && Emaths >=70)
    printf("B+ GOOD\n");

    else if(Emaths < 70 && Emaths >=60)
    printf("B- GOOD\n");

    else if(Emaths < 60 && Emaths >=50)
    printf("C PASSED\n");

    else if(Emaths < 50 && Emaths >=40)
    printf("C- SATISFACTORY\n");

    else if(Emaths < 40)
    printf("D FAILED\n");

    else
    printf("Input a valid score: \n");


    printf("Enter Econs score\n");

    //take score input from user

    scanf("%d", &Econs);

    if(Econs <=100 && Econs >=90)
    printf("A+ EXCELLENT\n");

    else if(Econs < 90 && Econs >=80)
    printf("A- VERY GOOD\n");

    else if(Econs < 80 && Econs >=70)
    printf("B+ GOOD\n");

    else if(Econs < 70 && Econs >=60)
    printf("B- GOOD\n");

    else if(Econs < 60 && Econs >=50)
    printf("C PASSED\n");

    else if(Econs < 50 && Econs >=40)
    printf("C- SATISFACTORY\n");

    else if(Econs < 40)
    printf("D FAILED\n");

    else
    printf("Input a valid score: \n");

    printf("Your CWA = %d\n",(Maths+English+Social+Science+Emaths+Geog+Govt+Econs) / 8);

    printf("Enjoy your vacation\n");
    */
    return 0;
}
