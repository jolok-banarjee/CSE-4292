/* •	Write a C program to find whether a given year is a leap year or not.
Author: Jolok Banarjee, Id: 21014026, AE-02, Aerospace, BSMRAAU */
#include<stdio.h>
int main(){
    int a;
    printf("Enter Year : (check is leap year or not?)");
    scanf("%d",&a);
    if(a%400==0){
        printf("Leap year");
    }
    else if(a%100!=0 && a%4==0){
        printf("Learp year");
    }
    else{
        printf("Not Leap year");
    }
    return 0;

}