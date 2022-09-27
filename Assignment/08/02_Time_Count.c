#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
    int result;
} d1, d2, result;

int main()
{
    // input - the start time
    printf("Enter the start time.\n");
    printf("Enter hours minutes and seconds : \n");
    scanf("%d %d %d", &d1.hours, &d1.minutes, &d1.seconds);
    // input - the stop time
    printf("\nEnter the stop time.\n");
    printf("Enter hours minutes and seconds : \n");
    scanf("%d %d %d", &d2.hours, &d2.minutes, &d2.seconds);
    // adding times
    result.hours = d1.hours + d2.hours;
    result.minutes = d1.minutes + d2.minutes;
    result.seconds= d1.seconds + d2.seconds;
    // time difference
    while (result.minutes >= 60){
        result.minutes = result.minutes - 60;
         while (result.seconds >= 60){
            result.seconds = result.seconds - 60;
            ++result.minutes;
    }
        ++result.hours;
    }
    printf("\nTime Difference: %d:%d:%d - %d:%d:%d = %d:%d:%d ",d1.hours,d1.minutes , d1.seconds,
        d2.hours, d2.minutes, d2.seconds, result.hours, result.minutes, result.seconds );
    return 0;
}