#include <stdio.h>
void main()
{
    int num, i=1;
    while(i<=5){
    printf("Input a number :");
    scanf("%d", &num);
    if (num >= 0)
        printf("%d is a positive number \n", num);
    else
        printf("%d is a negative number \n", num);
    
    i++;
    }
}
