/* C program to count the total number of words in a string.
 Author: Jolok Banarjee, ID: 21014026, AE-02, Aerospace, BSMRAAU */

#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int count=0, i;
    printf("Enter a number of string Words: ");
    gets(string);
    for(i=0; string[i]!='\0'; i++)
    {
        if(string[i]==' ' || string[i+1]!='\0')
        {
            count++;
        }
    }
    printf("The number of words in a string: %d.",count+1);
    return 0;
}
