#include <stdio.h>

int main()
{
    int number, i=1;

    while(i<=5)
    {
        printf("Enter a Number: ");
        scanf("%d",&number);
        if(number>0)
        {
            printf("The Number %d is Positive\n", number);
            //continue;
        }
        else if(number==0)
        {
            printf("The Number %d is Zero\n", number);
            //continue;
        }
        else
        {
            printf("The Number %d is Negative\n", number);
            //continue;
        }
        i++;
        if(i==5)
        break;
    }
    return 0;
}