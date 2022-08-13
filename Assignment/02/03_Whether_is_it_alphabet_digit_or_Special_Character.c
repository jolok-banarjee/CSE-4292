/*	Write a C program to check whether a character is an alphabet, digit or special character.
Author: Jolok Banarjee, Id: 21014026, AE-02, Aerospace, BSMRAAU */
#include <stdio.h>
int main(){
    //97-122 = a-z ASCII value
    //65-90 = A-Z ASCII value
    //48-57 = 0-9 ASCII value
    char ch;
    printf("Enter the Character, digit or special character:");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97){
        printf("%c It is lowercase alphabet",ch);
    }
    else if (ch<=90 && ch>=65){
        printf("%c It is uppercase alphabet",ch);
    }
    else if (ch<=57 && ch>=48){
        printf("%c It is a digit",ch);
    }
    else {
        printf("%c It is a Special Character");
    }
    return 0;
}