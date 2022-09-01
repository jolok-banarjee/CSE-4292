/*•	Write a C program that reads an integer between 1 and 12 and prints the month of
the year in English using Switch-case.
Author: Jolok Banarjee, Id: 21014026, AE-02, Aerospace, BSMRAAU*/
#include<stdio.h>
main()
{
    int monthNumber;
    printf("Enter an integer number between 1 to 12 :"); //Number will represent MonthNumber
    scanf("%d",&monthNumber);
    switch(monthNumber){
        case 1 :
        printf("JANUARY");
        break;

        case 2 :
        printf("FEBRUARY");
        break;

        case 3 :
        printf("MARCH");
        break;

        case 4 :
        printf("APRIL");
        break;

        case 5 :
        printf("MAY");
        break;

        case 6 :
        printf("JUNE");
        break;

        case 7 :
        printf("JULY");
        break;

        case 8 :
        printf("AUGUST");
        break;
        case 9 :
        printf("SEPTEMBER");
        break;
        case 10 :
        printf("OCTOBER");
        break;

        case 11 :
        printf("NOVEMBER");
        break;

        case 12 :
        printf("DECEMBER");
        break;

        default:
        printf("INVALID NUMBER!");
    }
    return 0;
}
