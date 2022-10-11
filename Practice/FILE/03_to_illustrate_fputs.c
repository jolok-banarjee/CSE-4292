#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("fputs.txt","w+");
    fputs("This is JOLOK BANARJEE.",fptr);
    fputs("From BANGLADESH",fptr);
    fclose(fptr);
    return 0;
}