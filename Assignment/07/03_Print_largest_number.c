/* 3.	Write a program in C to get the largest element of an array using the function */
#include <stdio.h>
void maxNumber(int arr[], int n);
int main()
{
    int i, n, arr[100];
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    maxNumber(arr, n);
    return 0;
}
void maxNumber(int arr[], int n)
{
    int i;
    // find largest number
    for (i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("The largest number is %d.", arr[0]);
}
