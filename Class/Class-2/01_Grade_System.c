#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark :");
    scanf("%d",&mark);
    if( mark>=80 ){
        printf("You Got A+");
    }
    else if (mark>=70 && mark<80){
        printf("You Got A");
    }
    else if (mark>=60 && mark<70){
        printf("You Got A-");
    }
    else if (mark>=50 && mark<60){
        printf("You Got B");
    }
    else if (mark>=40 && mark<50){
        printf("You Got C");
    }
    else if (mark<40){
        printf("You Failed!, It's Better Try Again");
    }
    return 0;
}