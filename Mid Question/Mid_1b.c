#include <stdio.h>

int main()
{
    int x=0, y=10, z=20;
    while(1){
        x++;
        if(y>z)break;
        y+=4*x; z+=2*x;
        }
        printf(" x = %d, y = %d, z = %d", x, y, z);
}