/*4. Write a C program to delete duplicate elements from array.
*/

#include <stdio.h>
int main()
{
    int size, temp;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int array[size];
    printf("\nInput %d arrray element: ",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Before removing all duplicate elements Elements of array are: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(array[i] == array[j])
            {
                temp = array[j];
                array[j] = array[size-1];
                array[size-1] = temp;
                size--;
            }
        }
    }
    printf("After removing all duplicate elements Elements of array are: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
