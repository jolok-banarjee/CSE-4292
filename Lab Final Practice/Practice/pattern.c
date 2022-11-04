#include<stdio.h>
int main()
{
    int row, col, i;
    printf("Enter the row number: ");
    scanf("%d", &row);
    for(i=1;i<=row;i++){
        for(col=1; col<=i;col++)
        {
            printf("%d",row-1);
        }
        printf("\n");
    }
    return 0;
}