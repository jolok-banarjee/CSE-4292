/* 3.Write a Program in C that asks from user to enter any 10
    array elements, and then ask to enter a number to search from
    the given array and print its position.*/

#include <stdio.h>

int main()
{
    int num, i, r, arr[30];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    printf("Enter the array elements: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d", &r);
    //Research starts from the index 0
    i = 0;
    while (i < num && r != arr[i])
    {
        i++;
    }
    if (i < num)
    {
        printf("The element is found in the position = %d", i++);
    }
    else
    {
        printf("Element not found!");
    }
    return 0;
}
