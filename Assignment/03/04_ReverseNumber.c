/*  1.Write a C program to reverse a number from user input.
    Author: Jolok Banarjee, Id: 21014026, AE-02, Aerospace, BSMRAAU */

#include <stdio.h>

int main()
{
    int number, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number = %d", reverse);
    return 0;
}
