#include <stdio.h>

int main()
{   
    //This code work not properly
    printf("Integer values \n\n");
    printf("%d %d %d \n", 2147483647, 2147483647+1, 2147483647+10);
    printf("\n");
    printf("Long integer values \n\n");
    printf("%ld %ld %ld\n",2147483647L, 2147483647L+1L, 2147483647L+10L); //problem in this line
    return 0;
}