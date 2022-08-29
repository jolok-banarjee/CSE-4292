#include <stdio.h>
int main()
{
    int n, i, num[50], sum=0;
    printf("Enter the numbers of elements : ");
    scanf("%d", &n);

    for(i=0; i<n; ++i)
    {
        printf("Initial Sum = %d\n",sum);
        printf("%d. Enter number: ", i+1);

        scanf("%d", &num[i]);
        printf("Given Number = %d\t", num[i]);
        sum += num[i];

    }
    printf("Total Sum = %d", sum);
    return 0;
}