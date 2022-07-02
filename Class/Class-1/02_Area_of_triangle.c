/*Area of Triangle
formula area = height*base
*/

#include<stdio.h>

int main()
{
    float height, base, area;

    //height = 23.89;
    //base =50.00;

    printf("Enter Height :\n");
    scanf("%f", &height);

    printf("Enter Base : \n");
    scanf("%f", &base);

    area= height*base;

    printf("Area of Trianle is %.3f", area);

    return 0;
}

